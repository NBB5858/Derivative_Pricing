
/* requires
 * Quanto.cpp
 * Payoff2.cpp
 * Random1.cpp
 * SimpleMC2.cpp
 */

#include <SimpleMC2.h>
#include <Quanto.h>
#include <iostream>
using namespace std;

int main() {
    double Expiry;
    double FX;
    double Spot;
    double Strike;
    double Vol;
    double r;
    unsigned long NumberOfPaths;


    cout << "\nEnter expiry\n";
    cin >> Expiry;

    cout << "\nEnter FX\n";
    cin >> FX;

    cout << "\nEnter spot\n";
    cin >> Spot;

    cout << "\nEnter strike\n";
    cin >> Strike;

    cout << "\nEnter vol\n";
    cin >> Vol;

    cout << "\nEnter r\n";
    cin >> r;

    cout << "\nEnter Number of Paths\n";
    cin >> NumberOfPaths;

    PayOffQuanto thePayOff(FX, Strike);

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