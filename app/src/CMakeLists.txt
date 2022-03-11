# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.18.1)

project("hellodjinni")

set(DJINNI_BUILD_TESTING OFF CACHE INTERNAL "Djinni test building off")
set(DJINNI_WITH_JNI ON CACHE INTERNAL "Djinni with JNI")

add_subdirectory(djinni-support-lib)

add_library(hellodjinni SHARED main/cpp/native-lib.cpp)

find_library(log-lib log)

target_link_libraries(hellodjinni ${log-lib})