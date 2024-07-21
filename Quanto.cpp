//
// Created by Noah bittermann on 7/21/24.
//

#include <Quanto.h>
#include <algorithm>

PayOffQuanto::PayOffQuanto(double FX_, double Strike_)
    : FX(FX_), Strike(Strike_) {}

double PayOffQuanto::operator()(double Spot) const {
    return FX * std::max(Spot - Strike, 0.0);

}


