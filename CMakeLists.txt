cmake_minimum_required(VERSION 3.28)
project(Derivative_Pricing)

set(CMAKE_CXX_STANDARD 17)

include_directories(/Users/noahbittermann/CLionProjects/Derivative-Pricing/include)


add_executable(Derivative_Pricing1
        main.cpp
        include/Random1.h
        Random1.cpp
        SimpleMC2.cpp
        include/SimpleMC2.h
)

add_executable(Derivative_Pricing2
        SimpleMCMain2.cpp
        include/Random1.h
        Random1.cpp
        include/PayOff1.h
        PayOff1.cpp
        include/SimpleMC.h
        SimpleMC.cpp
)

add_executable(Derivative_Pricing3
        SimpleMCMain3.cpp
        include/Random1.h
        Random1.cpp
        include/PayOff2.h
        PayOff2.cpp
        include/SimpleMC2.h
        SimpleMC2.cpp
)

add_executable(Derivative_Pricing5
        SimpleMCMain5.cpp
        include/DoubleDigital.h
        DoubleDigital.cpp
        include/Random1.h
        Random1.cpp
        include/PayOff2.h
        PayOff2.cpp
        include/SimpleMC2.h
        SimpleMC2.cpp
)

add_executable(Derivative_Pricing5_Quanto
        SimpleMCMain5_Quanto.cpp
        include/Quanto.h
        Quanto.cpp
        include/Random1.h
        Random1.cpp
        include/PayOff2.h
        PayOff2.cpp
        include/SimpleMC2.h
        SimpleMC2.cpp
)