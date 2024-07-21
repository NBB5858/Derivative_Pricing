//
// Created by Noah bittermann on 7/21/24.
//

#ifndef VANILLA2_H
#define VANILLA2_H



#include <PayOff3.h>

class VanillaOption {
public:
    VanillaOption(const PayOff& ThePayOff_, double Expiry_);
    VanillaOption(const VanillaOption& original);
    VanillaOption& operator=(const VanillaOption& original);
    ~VanillaOption();

    double GetExpiry() const;
    double OptionPayOff(double Spot) const;

private:
    double Expiry;
    PayOff* ThePayOffPtr;
};




#endif //VANILLA2_H
