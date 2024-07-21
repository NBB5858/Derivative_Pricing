//
// Created by Noah bittermann on 7/21/24.
//

#ifndef SIMPLEMC_H
#define SIMPLEMC_H

#include <PayOff1.h>

double SimpleMonteCarlo2(const PayOff& thePayOff,
                         double Expiry,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPaths);


#endif //SIMPLEMC_H
