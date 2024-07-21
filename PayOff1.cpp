//
// Created by Noah bittermann on 7/21/24.
//

#include <PayOff1.h>
#include <algorithm> // C++ standard library used for min and max

PayOff::PayOff(double Strike_, OptionType TheOptionsType_)
    : Strike(Strike_), TheOptionsType(TheOptionsType_) {

}

double PayOff::operator ()(double spot) const {

    switch (TheOptionsType) {
        case call:
            return std::max(spot - Strike, 0.0);
        case put:
            return std::max(Strike-spot, 0.0);
        case digitalcall:
            return spot - Strike ? 1 : 0;
        default:
            throw std::runtime_error("unknown option type found.");
    }

}