cmake_minimum_required(VERSION 3.3)
project(CheckFortran Fortran)
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/result.cmake"
  "set(CMAKE_Fortran_COMPILER \"${CMAKE_Fortran_COMPILER}\")\n"
  "set(CMAKE_Fortran_FLAGS \"${CMAKE_Fortran_FLAGS}\")\n"
  )
