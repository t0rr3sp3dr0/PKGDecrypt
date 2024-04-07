// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "PKGDecrypt",
    products: [
        .executable(name: "pkgdecrypt", targets: ["PKGDecryptBin"]),
        .library(name: "PKGDecrypt", type: .dynamic, targets: ["PKGDecryptLib"]),
    ],
    dependencies: [
        .package(url: "https://github.com/apple/swift-argument-parser.git", from: "1.2.0"),
    ],
    targets: [
        .executableTarget(
            name: "PKGDecryptBin",
            dependencies: [
                .product(name: "ArgumentParser", package: "swift-argument-parser"),
                .target(name: "PKGDecryptLib"),
            ]
        ),
        .target(
            name: "PKGDecryptLib",
            dependencies: [
                .target(name: "CommerceCore"),
                .target(name: "FridaGum"),
                .target(name: "PackageKit"),
                .target(name: "storedownloadd"),
            ],
            cSettings: [
                .unsafeFlags(["-isystem", "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include"]),
            ]
        ),
        .binaryTarget(
            name: "CommerceCore",
            path: "CommerceCore.xcframework"
        ),
        .binaryTarget(
            name: "FridaGum",
            path: "FridaGum.xcframework"
        ),
        .binaryTarget(
            name: "PackageKit",
            path: "PackageKit.xcframework"
        ),
        .binaryTarget(
            name: "storedownloadd",
            path: "storedownloadd.xcframework"
        ),
    ]
)
