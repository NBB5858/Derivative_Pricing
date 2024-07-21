#include <iostream>
#include <Random1.h>
#include <cmath>
using namespace std;

double SimpleMonteCarlo1(double Expiry,
                         double Strike,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPaths,
                         string payoff_type) {

    double variance = Vol*Vol*Expiry;
    double rootVariance = sqrt(variance);
    double itoCorrection= -0.5*variance;

    double movedSpot = Spot*exp(r*Expiry + itoCorrection);
    double thisSpot;
    double runningSum=0;

    double thisPayoff;

    for (unsigned long i=0; i<NumberOfPaths; i++) {
        double thisGaussian = GetOneGaussianByBoxMuller();
        thisSpot = movedSpot*exp(rootVariance*thisGaussian);


        if (payoff_type == "call") {
            thisPayoff = thisSpot - Strike;
            thisPayoff = thisPayoff > 0 ? thisPayoff : 0;
        } else if (payoff_type == "put") {
            thisPayoff = Strike - thisSpot;
            thisPayoff = thisPayoff > 0 ? thisPayoff : 0;

        }

        runningSum += thisPayoff;
    }

    double mean = runningSum / NumberOfPaths;
    mean *= exp(-r*Expiry);
    return mean;
}

int main() {

    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;
    string payoff_type;


    cout << "\n Enter payoff type (\"call\" or \"put\") \n";
    cin >> payoff_type;

    cout << "\nEnter expiry\n";
    cin >> Expiry;

    cout << "\nEnter strike\n";
    cin >> Strike;

    cout << "\nEnter spot\n";
    cin >> Spot;

    cout << "\nEnter vol\n";
    cin >> Vol;

    cout << "\nEnter r\n";
    cin >> r;

    cout << "\nEnter Number of Paths\n";
    cin >> NumberOfPaths;

    double result = SimpleMonteCarlo1(Expiry,
                                      Strike,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths,
                                      payoff_type);

    cout <<"the price is " << result << "\n";

    double tmp;
    cin >> tmp;

    return 0;

}
