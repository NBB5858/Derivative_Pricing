
/* requires
 * DoubleDigital.cpp
 * Payoff2.cpp
 * Random1.cpp
 * SimpleMC2.cpp
 */

#include <SimpleMC2.h>
#include <DoubleDigital.h>
#include <iostream>
using namespace std;

int main() {
    double Expiry;
    double Low, Up;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;


    cout << "\nEnter expiry\n";
    cin >> Expiry;

    cout << "\nEnter low barrier\n";
    cin >> Low;

    cout << "\nEnter high barrier\n";
    cin >> Up;

    cout << "\nEnter spot\n";
    cin >> Spot;

    cout << "\nEnter vol\n";
    cin >> Vol;

    cout << "\nEnter r\n";
    cin >> r;

    cout << "\nEnter Number of Paths\n";
    cin >> NumberOfPaths;

    PayOffDoubleDigital thePayOff(Low, Up);

    double result = SimpleMonteCarlo2(thePayOff,
                                          Expiry,
                                          Spot,
                                          Vol,
                                          r,
                                          NumberOfPaths);

    cout << "\nthe price is " << result << "\n";

    double tmp;
    cin >> tmp;

    return 0;
}