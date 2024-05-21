//
//  Command.swift
//
//
//  Created by Pedro Tôrres on 2024-04-06.
//

import Foundation

import ArgumentParser

import PKGDecryptLib

private enum DecodingError : Error {
    case dpInfoCorrupted
    case hwInfoCorrupted
}

@main
struct Command: ParsableCommand {
    static var configuration = CommandConfiguration(commandName: "pkgdecrypt")

    @Option(name: .shortAndLong, help: "The contents of dpInfo encoded in Base64")
    var dpInfo: String

    @Option(name: .shortAndLong, help: "The contents of hwInfo encoded in Base64")
    var hwInfo: String? = nil

    @Option(name: .shortAndLong, help: "The path of the encrypted package")
    var pkgPath: String

    @Option(name: .shortAndLong, help: "The path for storedownloadd")
    var storedownloaddPath = "/System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storedownloadd"

    mutating func run() throws {
        if let _ = try? PKGDecrypt.verifyArchive(atPath: self.pkgPath) {
            print("NOOP")
            return
        }

        do {
            let hwInfo: Data?
            if let hwInfoString = self.hwInfo {
                guard let hwInfoData = Data(base64Encoded: hwInfoString) else { throw DecodingError.hwInfoCorrupted }
                hwInfo = hwInfoData
            } else {
                hwInfo = nil
            }

            guard let dpInfo = Data(base64Encoded: self.dpInfo) else { throw DecodingError.dpInfoCorrupted }

            let fm = FileManager.default
            let tmpPath = self.pkgPath + ":tmp"

            try? fm.removeItem(atPath: tmpPath)
            try fm.copyItem(atPath: self.pkgPath, toPath: tmpPath)

            try PKGDecrypt.decryptArchive(atPath: tmpPath, dpInfo: dpInfo, hwInfo: hwInfo, storedownloaddPath: self.storedownloaddPath)
            try PKGDecrypt.verifyArchive(atPath: tmpPath)

            try? fm.removeItem(atPath: self.pkgPath)
            try fm.moveItem(atPath: tmpPath, toPath: self.pkgPath)
        } catch {
            print("FAIL")
            throw error
        }

        print("SUCC")
        return
    }
}
