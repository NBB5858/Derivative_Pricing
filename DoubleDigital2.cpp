//
// Created by Noah bittermann on 7/21/24.
//


#include <DoubleDigital2.h>


PayOffDoubleDigital::PayOffDoubleDigital(double LowerLevel_, double UpperLevel_)
    : LowerLevel(LowerLevel_), UpperLevel(UpperLevel_) {}

double PayOffDoubleDigital::operator()(double Spot) const {

    if (Spot <= LowerLevel)
        return 0;
    if (Spot >= UpperLevel)
        return 0;

    return 1;
}

PayOff* PayOffDoubleDigital::clone() const {
    return new PayOffDoubleDigital(*this);
}
