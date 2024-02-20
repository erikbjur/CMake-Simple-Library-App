# I run cmake --version and grab my current version
cmake_minimum_required(VERSION 3.28.3)

# This creates our project and assigns the language to c++
project(Simple_App LANGUAGES CXX) 

set(CMAKE_CXX_STANDARD 20)  # This sets the c++ standard to c++20
set(CMAKE_CXX_EXTENSIONS OFF)   # Turns off c++ extensions
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Requires that we set the c++ standard

# Here we assume the os is 32 bit
set(OS_Bit_Type 32)
# We can check the size of a void pointer and see how big it is
if(CMAKE_SIZEOF_VOID_P EQUAL 8) # if it's 8 bytes then we are on a 64 bit machine
    set(OS_Bit_Type 64)
endif()

# Here we set the default path so we can assign where our build products go.
set( BinOutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OS_Bit_Type}/${CMAKE_BUILD_TYPE}" )
set( LibOutputDir "${CMAKE_SOURCE_DIR}/lib/${CMAKE_SYSTEM_NAME}${OS_Bit_Type}/${CMAKE_BUILD_TYPE}" )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${LibOutputDir}" )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY "${BinOutputDir}")
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BinOutputDir}"
)

# Add our Application sub folder
add_subdirectory( Application )
# Add our Library sub folder
add_subdirectory( Library )

