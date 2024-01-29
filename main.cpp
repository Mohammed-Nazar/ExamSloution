// this code created by Mohammed Nazar Group A
#include <iostream>

using namespace std;

int main() {
    
    const double cmInInche = 2.54;
    double UserHeightInInches, UserHeightInCm;
    cout << "Input your height in cm: \n";
    cin>> UserHeightInCm;
    
    UserHeightInInches = UserHeightInCm / cmInInche;
    
    cout << "Your height in inches is : " << UserHeightInInches;


    return 0;
}
