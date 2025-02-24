#include <iostream>
using namespace std;

int main() {
    int dollars, cents;
    int totalCents;
    int quarters, dimes, nickels, pennies;

    cout << "Please enter your amount in the format of dollars and cents separated by a space: ";
    cin >> dollars >> cents;

    totalCents = (dollars * 100) + cents;

    quarters = totalCents / 25;        
    totalCents %= 25;                      

    dimes = totalCents / 10;           
    totalCents %= 10;                     

    nickels = totalCents / 5;     
    totalCents %= 5;                

    pennies = totalCents;             

    cout << dollars << " dollars and " << cents << " cents are:\n";
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;
}
