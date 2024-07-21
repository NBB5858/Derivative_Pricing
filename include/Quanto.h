//
// Created by Noah bittermann on 7/21/24.
//

#ifndef QUANTO_H
#define QUANTO_H

#include <Payoff2.h>


class PayOffQuanto : public PayOff {
public:
    PayOffQuanto(double FX, double Strike);
    virtual double operator()(double spot) const;
    virtual ~PayOffQuanto(){}
private:
    double FX;
    double Strike;
};



#endif //QUANTO_H
