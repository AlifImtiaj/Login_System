﻿# CMakeList.txt : CMake project for Login_System, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Login_System")
include_directories(${CMAKE_SOURCE_DIR}/include/)

# Add source to this project's executable.
add_executable (Login_System "Login_System.cpp" "Login_System.h" "include/account.h" "src/account.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Login_System PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
