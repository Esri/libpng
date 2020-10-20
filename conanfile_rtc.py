from conans import ConanFile


class PngConan(ConanFile):
    name = "png"
    version = "1.6.37"
    url = "https://github.com/Esri/libpng/tree/runtimecore"
    license = "https://github.com/Esri/libpng/blob/runtimecore/LICENSE"
    description = "Open, Extensible Image Format with Lossless Compression."

    # RTC specific triple
    settings = "platform_architecture_target"

    def package(self):
        base = self.source_folder + "/"
        relative = "3rdparty/libpng/"

        # headers
        self.copy("png.h", src=base, dst=relative)
        self.copy("pngconf.h", src=base, dst=relative)
        self.copy("pnglibconf.h", src=base, dst=relative)

        # libraries
        output = "output/" + str(self.settings.platform_architecture_target) + "/staticlib"
        self.copy("*" + self.name + "*", src=base + "../../" + output, dst=output)
