cmake_minimum_required(VERSION 3.28)
project(Derivative_Pricing)

set(CMAKE_CXX_STANDARD 17)

include_directories(/Users/noahbittermann/CLionProjects/Derivative-Pricing/include)


add_executable(Derivative_Pricing7
        VanillaMain2.cpp
        include/Vanilla2.h
        Vanilla2.cpp
        include/DoubleDigital2.h
        DoubleDigital2.cpp
        include/Random1.h
        Random1.cpp
        include/PayOff3.h
        PayOff3.cpp
        include/SimpleMC4.h
        SimpleMC4.cpp
)