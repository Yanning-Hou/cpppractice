#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << "section a" << endl;

    int sequence_a, num_a, product_a = 1;
    double geoMean_a;

    cout << "Please enter the length of the sequence: ";
    cin >> sequence_a;
    cout << "Please enter your the sequence: "<< endl;
    for (int i = 1 ; i <= sequence_a; i++)
    {
        cin >> num_a;
        product_a*=num_a;
    }
    
    geoMean_a = pow(product_a, 1.0/sequence_a);

    cout << "The geometric mean is: " << fixed << setprecision(4) << geoMean_a << endl;

    cout << "section b" << endl;

    int sequence_b = 0, num_b = 1, product_b = 1;
    double geoMean_b;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End yoursequence by typing -1:"<< endl;
    cin >> num_b;
    while (num_b != -1)
    {
        product_b*=num_b;
        sequence_b++;
        cin >> num_b;
    }
    
    geoMean_b = pow(product_b, 1.0/sequence_b);

    cout << "The geometric mean is: " << fixed << setprecision(4) << geoMean_b << endl;

    return 0;
}


