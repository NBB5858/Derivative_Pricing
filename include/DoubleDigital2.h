//
// Created by Noah bittermann on 7/21/24.
//

#ifndef DOUBLEDIGITAL_H
#define DOUBLEDIGITAL_H
#include <PayOff3.h>



class PayOffDoubleDigital : public PayOff {

public:
    PayOffDoubleDigital(double LowerLevel_, double UpperLever_);
    virtual double operator()(double Spot) const;
    virtual ~PayOffDoubleDigital(){}
    virtual PayOff* clone() const;

private:
    double LowerLevel;
    double UpperLevel;

};



#endif //DOUBLEDIGITAL_H
