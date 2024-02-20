cmake_minimum_required(VERSION 3.28.3)

project(Simple_App LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

set( FullOutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE}" )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FullOutputDir}/static_libs" )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}")
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}"
)

add_subdirectory( Application )
add_subdirectory( Library )

