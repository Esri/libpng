project "png"

  local prj = project()
  local prjDir = prj.basedir

  -- -------------------------------------------------------------
  -- project
  -- -------------------------------------------------------------

  -- common project settings

  dofile (_BUILD_DIR .. "/3rdparty_static_project.lua")

  -- project specific settings

  uuid "BBB2B003-6593-4409-B5CB-0AF7AAB203CE"

  flags {
    "NoPCH",
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

  includedirs {
    "libpng",
    "../zlib",
  }

  -- -------------------------------------------------------------
  -- configurations
  -- -------------------------------------------------------------

  if (_PLATFORM_WINDOWS) then
    -- -------------------------------------------------------------
    -- configuration { "windows" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/3rdparty_static_win.lua")

    -- project specific configuration settings

    configuration { "windows" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "windows", "Debug", "x32" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_win_x86_debug.lua")

    -- project specific configuration settings

    -- configuration { "windows", "Debug", "x32" }

    -- -------------------------------------------------------------
    -- configuration { "windows", "Debug", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_win_x64_debug.lua")

    -- project specific configuration settings

    -- configuration { "windows", "Debug", "x64" }

    -- -------------------------------------------------------------
    -- configuration { "windows", "Release", "x32" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_win_x86_release.lua")

    -- project specific configuration settings

    -- configuration { "windows", "Release", "x32" }

    -- -------------------------------------------------------------
    -- configuration { "windows", "Release", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_win_x64_release.lua")

    -- project specific configuration settings

    -- configuration { "windows", "Release", "x64" }

    -- -------------------------------------------------------------
  end

  if (_PLATFORM_LINUX) then
    -- -------------------------------------------------------------
    -- configuration { "linux" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_linux.lua")

    -- project specific configuration settings

    -- configuration { "linux" }

    -- -------------------------------------------------------------
    -- configuration { "linux", "Debug", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_linux_x64_debug.lua")

    -- project specific configuration settings

    configuration { "linux", "Debug", "x64" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "linux", "Release", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_linux_x64_release.lua")

    -- project specific configuration settings

    configuration { "linux", "Release", "x64" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "linux", "Debug", "ARM64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_linux_arm64_debug.lua")

    -- project specific configuration settings

    configuration { "linux", "Debug", "ARM64" }

      defines {
        "PNG_ARM_NEON_OPT=0", -- turn off neon instructions as they're not supported for linux arm64
      }

    -- -------------------------------------------------------------
    -- configuration { "linux", "Release", "ARM64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_linux_arm64_release.lua")

    -- project specific configuration settings

    configuration { "linux", "Release", "ARM64" }

      defines {
        "PNG_ARM_NEON_OPT=0", -- turn off neon instructions as they're not supported for linux arm64
      }

    -- -------------------------------------------------------------
  end

  if (_PLATFORM_MACOS) then
    -- -------------------------------------------------------------
    -- configuration { "macosx" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_mac.lua")

    -- project specific configuration settings

    configuration { "macosx" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "macosx", "Debug", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_mac_x64_debug.lua")

    -- project specific configuration settings

    -- configuration { "macosx", "Debug", "x64" }

    -- -------------------------------------------------------------
    -- configuration { "macosx", "Release", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_mac_x64_release.lua")

    -- project specific configuration settings

    -- configuration { "macosx", "Release", "x64" }

    -- -------------------------------------------------------------
  end

  if (_PLATFORM_IOS) then
    -- -------------------------------------------------------------
    -- configuration { "ios*" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_ios.lua")

    -- project specific configuration settings

    configuration { "ios*" }

      defines {
        "_REENTRANT",
        "NATIVECOMPILE",
      }

    -- -------------------------------------------------------------
    -- configuration { "ios_arm64_debug" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_ios_arm64_debug.lua")

    -- project specific configuration settings

    configuration { "ios_arm64_debug" }

      files { neon_files }

    -- -------------------------------------------------------------
    -- configuration { "ios_arm64_release" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_ios_arm64_release.lua")

    -- project specific configuration settings

    configuration { "ios_arm64_release" }

      files { neon_files }

    -- -------------------------------------------------------------
    -- configuration { "ios_sim64_debug" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_ios_sim64_debug.lua")

    -- project specific configuration settings

    configuration { "ios_sim64_debug" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "ios_sim64_release" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_ios_sim64_release.lua")

    -- project specific configuration settings

    configuration { "ios_sim64_release" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
  end

  if (_PLATFORM_ANDROID) then
    -- -------------------------------------------------------------
    -- configuration { "android*" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android.lua")

    -- project specific configuration settings

    configuration { "android*" }

      defines {
        "HAVE_MEMMOVE",
      }

    -- -------------------------------------------------------------
    -- configuration { "android_armv7_debug" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_armv7_debug.lua")

    -- project specific configuration settings

    configuration { "android_armv7_debug" }

      files { neon_files }

    -- -------------------------------------------------------------
    -- configuration { "android_armv7_release" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_armv7_release.lua")

    -- project specific configuration settings

    configuration { "android_armv7_release" }

      files { neon_files }

    -- -------------------------------------------------------------
    -- configuration { "android_x86_debug" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_x86_debug.lua")

    -- project specific configuration settings

    configuration { "android_x86_debug" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "android_x86_release" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_x86_release.lua")

    -- project specific configuration settings

    configuration { "android_x86_release" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "android_arm64_debug" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_arm64_debug.lua")

    -- project specific configuration settings

    configuration { "android_arm64_debug" }

      files { neon_files }

    -- -------------------------------------------------------------
    -- configuration { "android_arm64_release" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_arm64_release.lua")

    -- project specific configuration settings

    configuration { "android_arm64_release" }

      files { neon_files }

    -- -------------------------------------------------------------
    -- configuration { "android_x64_debug" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_x64_debug.lua")

    -- project specific configuration settings

    configuration { "android_x64_debug" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
    -- configuration { "android_x64_release" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_android_x64_release.lua")

    -- project specific configuration settings

    configuration { "android_x64_release" }

      defines { sse_defines }

      files { sse_files }

    -- -------------------------------------------------------------
  end

  if (_PLATFORM_WINUWP) then
    -- -------------------------------------------------------------
    -- configuration { "windows" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp.lua")

    -- project specific configuration settings

    configuration { "windows" }

      defines {
        "_CRT_SECURE_NO_WARNINGS",
        "PNG_ARM_NEON_OPT=0", -- WinUWP doesn't support conditional files or neon
      }

    -- -------------------------------------------------------------
    -- configuration { "winuwp_debug", "x32" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp_x86_debug.lua")

    -- project specific configuration settings

    -- configuration { "winuwp_debug", "x32" }

    -- -------------------------------------------------------------
    -- configuration { "winuwp_release", "x32" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp_x86_release.lua")

    -- project specific configuration settings

    -- configuration { "winuwp_release", "x32" }

    -- -------------------------------------------------------------
    -- configuration { "winuwp_debug", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp_x64_debug.lua")

    -- project specific configuration settings

    -- configuration { "winuwp_debug", "x64" }

    -- -------------------------------------------------------------
    -- configuration { "winuwp_release", "x64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp_x64_release.lua")

    -- project specific configuration settings

    -- configuration { "winuwp_release", "x64" }

    -- -------------------------------------------------------------
    -- configuration { "winuwp_debug", "ARM64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp_arm64_debug.lua")

    -- project specific configuration settings

    -- configuration { "winuwp_debug", "ARM64" }

    -- -------------------------------------------------------------
    -- configuration { "winuwp_release", "ARM64" }
    -- -------------------------------------------------------------

    -- common configuration settings

    dofile (_BUILD_DIR .. "/static_winuwp_arm64_release.lua")

    -- project specific configuration settings

    -- configuration { "winuwp_release", "ARM64" }

    -- -------------------------------------------------------------
  end

  if (_IS_QT) then
    -- -------------------------------------------------------------
    -- configuration { "qt" }
    -- -------------------------------------------------------------

    local qt_include_dirs = PROJECT_INCLUDE_DIRS

    -- Add additional QT include dirs
    -- table.insert(qt_include_dirs, <INCLUDE_PATH>)

    createqtfiles(project(), qt_include_dirs)

    -- -------------------------------------------------------------
  end
