//
// Created by Noah bittermann on 7/21/24.
//

#ifndef SIMPLEMC2_H
#define SIMPLEMC2_H


#include <PayOff2.h>

double SimpleMonteCarlo2(const PayOff& thePayOff,
                         double Expiry,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPaths);




#endif //SIMPLEMC2_H
