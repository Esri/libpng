project "png"

dofile(_BUILD_DIR .. "/static_library.lua")

configuration { "*" }

uuid "BBB2B003-6593-4409-B5CB-0AF7AAB203CE"

flags { "NoPCH" }

includedirs {
  "libpng",
  _3RDPARTY_DIR .. "/zlib",
}

files {
  "png.c",
  "pngerror.c",
  "pngget.c",
  "pngmem.c",
  "pngpread.c",
  "pngread.c",
  "pngrio.c",
  "pngrtran.c",
  "pngrutil.c",
  "pngset.c",
  "pngtrans.c",
  "pngwio.c",
  "pngwrite.c",
  "pngwtran.c",
  "pngwutil.c",
}

sse_defines = {
  "PNG_INTEL_SSE",
}

sse_files = {
  "intel/filter_sse2_intrinsics.c",
  "intel/intel_init.c",
}

neon_files = {
  "arm/arm_init.c",
  "arm/palette_neon_intrinsics.c",
  "arm/filter_neon_intrinsics.c",
}

if (_PLATFORM_ANDROID) then
  defines {
    "HAVE_MEMMOVE",
  }

  configuration { "*arm64*" }

  files { neon_files }

  configuration { "*armv7*" }

  files { neon_files }

  configuration { "*x64*" }

  defines { sse_defines }

  files { sse_files }

  configuration { "*x86*" }

  defines { sse_defines }

  files { sse_files }
end

if (_PLATFORM_COCOA) then
  defines {
    "_REENTRANT",
    "NATIVECOMPILE",
  }

  configuration { "*arm64*" }

  files { neon_files }

  configuration { "*x64*" }

  defines { sse_defines }

  files { sse_files }
end

if (_PLATFORM_IOS) then
  defines {
    "_REENTRANT",
    "NATIVECOMPILE",
  }

  configuration { "*arm64*" }

  files { neon_files }

  configuration { "*x64*" }

  defines { sse_defines }

  files { sse_files }
end

if (_PLATFORM_LINUX) then
  configuration { "ARM64" }

  defines {
    "PNG_ARM_NEON_OPT=0", -- turn off neon instructions as they're not supported for linux arm64
  }

  configuration { "x64" }

  defines { sse_defines }

  files { sse_files }
end

if (_PLATFORM_MACOS) then
  configuration { "ARM64" }

  files { neon_files }

  configuration { "x64" }

  defines { sse_defines }

  files { sse_files }
end

if (_PLATFORM_WINDOWS) then
  defines { sse_defines }

  files { sse_files }
end

if (_PLATFORM_WINUWP) then
  defines {
    "_CRT_SECURE_NO_WARNINGS",
    "PNG_ARM_NEON_OPT=0", -- WinUWP doesn't support conditional files or neon
  }
end
