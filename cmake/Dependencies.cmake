SET(CMAKE_FIND_USE_CMAKE_SYSTEM_PATH OFF CACHE BOOL "Prevent using system paths for finding libraries")

BA_PACKAGE_LIBRARY(zlib          v1.2.11)
BA_PACKAGE_LIBRARY(ba-logger     v1.2.0)
BA_PACKAGE_LIBRARY(boost         v1.78.0)
BA_PACKAGE_LIBRARY(fleet-protocol-interface             v2.0.0 PLATFORM_STRING_MODE any_machine NO_DEBUG ON)
BA_PACKAGE_LIBRARY(fleet-protocol-cxx-helpers-static    v1.1.1)

IF (BRINGAUTO_TESTS)
    BA_PACKAGE_LIBRARY(gtest         v1.12.1)
ENDIF ()