all: clean configure build
.PHONY: all

build: configure
	swift build -c release --arch arm64 --arch x86_64
.PHONY: all

clean:
	rm -Rfv ./.build ./.swiftpm ./FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/{Headers/frida-gum.h,libfrida-gum.a}
.PHONY: clean

configure: FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/Headers/frida-gum.h FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/libfrida-gum.a
.PHONY: configure

FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/Headers/frida-gum.h FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/libfrida-gum.a: FRIDAVER ?= 16.2.1
FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/Headers/frida-gum.h FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/libfrida-gum.a: TMPDIR := $(shell mktemp -d)
FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/Headers/frida-gum.h FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/libfrida-gum.a:
	mkdir -p $(TMPDIR)/{arm64,arm64e,fat,x86_64}
	curl -Lfo $(TMPDIR)/arm64.txz https://github.com/frida/frida/releases/download/$(FRIDAVER)/frida-gum-devkit-$(FRIDAVER)-macos-arm64.tar.xz
	tar -JC $(TMPDIR)/arm64 -xvf $(TMPDIR)/arm64.txz
	curl -Lfo $(TMPDIR)/arm64e.txz https://github.com/frida/frida/releases/download/$(FRIDAVER)/frida-gum-devkit-$(FRIDAVER)-macos-arm64e.tar.xz
	tar -JC $(TMPDIR)/arm64e -xvf $(TMPDIR)/arm64e.txz
	curl -Lfo $(TMPDIR)/x86_64.txz https://github.com/frida/frida/releases/download/$(FRIDAVER)/frida-gum-devkit-$(FRIDAVER)-macos-x86_64.tar.xz
	tar -JC $(TMPDIR)/x86_64 -xvf $(TMPDIR)/x86_64.txz
	diff $(TMPDIR)/x86_64/frida-gum.h $(TMPDIR)/arm64/frida-gum.h || true
	diff $(TMPDIR)/arm64/frida-gum.h $(TMPDIR)/arm64e/frida-gum.h
	lipo -create -output $(TMPDIR)/fat/libfrida-gum.a -arch arm64 $(TMPDIR)/arm64/libfrida-gum.a -arch arm64e $(TMPDIR)/arm64e/libfrida-gum.a -arch x86_64 $(TMPDIR)/x86_64/libfrida-gum.a
	mv -fv $(TMPDIR)/x86_64/frida-gum.h ./FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/Headers/frida-gum.h
	mv -fv $(TMPDIR)/fat/libfrida-gum.a ./FridaGum.xcframework/macos-arm64_arm64e_x86_64/FridaGum.framework/libfrida-gum.a
	rm -Rfv $(TMPDIR)/*
