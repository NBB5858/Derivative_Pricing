//
// Created by Noah bittermann on 7/21/24.
//

#ifndef SIMPLEMC3_H
#define SIMPLEMC3_H

#include <Vanilla2.h>

double SimpleMonteCarlo3(const VanillaOption& TheOption,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPaths);




#endif //SIMPLEMC3_H
