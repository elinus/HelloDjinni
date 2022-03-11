# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.18.1)

project("hellodjinni")

set(DJINNI_BUILD_TESTING OFF CACHE INTERNAL "Djinni test building off")
set(DJINNI_WITH_JNI ON CACHE INTERNAL "Djinni with JNI")

add_subdirectory(djinni-support-lib)

set(HEADER_FILES generated/cpp generated/jni main/cpp)

file(GLOB_RECURSE SOURCE_FILES
        generated/cpp/*.cpp
        generated/jni/*.cpp
        main/cpp/*.cpp
)

set(ALL_FILES ${HEADER_FILES} ${SOURCE_FILES})

add_library(native-lib SHARED ${ALL_FILES})
find_library(log-lib log)
target_link_libraries(native-lib PUBLIC djinni-support-lib::djinni-support-lib)
target_include_directories(native-lib PUBLIC ${ALL_FILES} ${log-lib})