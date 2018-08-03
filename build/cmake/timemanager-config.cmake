# TImeManager CMake config file
#
# This file sets the following variables:
# TImeManager_FOUND - Always TRUE.
# TImeManager_INCLUDE_DIRS - Directories containing the TImeManager include files.
# TImeManager_IDL_DIRS - Directories containing the TImeManager IDL files.
# TImeManager_LIBRARIES - Libraries needed to use TImeManager.
# TImeManager_DEFINITIONS - Compiler flags for TImeManager.
# TImeManager_VERSION - The version of TImeManager found.
# TImeManager_VERSION_MAJOR - The major version of TImeManager found.
# TImeManager_VERSION_MINOR - The minor version of TImeManager found.
# TImeManager_VERSION_REVISION - The revision version of TImeManager found.
# TImeManager_VERSION_CANDIDATE - The candidate version of TImeManager found.

message(STATUS "Found TImeManager-1.0.0")
set(TImeManager_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(TImeManager_INCLUDE_DIRS
#    "/usr/local/include/timemanager-1"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(TImeManager_IDL_DIRS
#    "/usr/local/include/timemanager-1/idl")
set(TImeManager_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(TImeManager_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(TImeManager_LIBRARIES
        "/usr/local//libtimemanager.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(TImeManager_LIBRARIES
        "/usr/local//libtimemanager.dylib"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(TImeManager_DEFINITIONS ${<dependency>_DEFINITIONS})

set(TImeManager_VERSION 1.0.0)
set(TImeManager_VERSION_MAJOR 1)
set(TImeManager_VERSION_MINOR 0)
set(TImeManager_VERSION_REVISION 0)
set(TImeManager_VERSION_CANDIDATE )

