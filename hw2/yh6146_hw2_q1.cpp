#include <iostream>
using namespace std;


int main() {
    int quarters, dimes, nickels, pennies;

    cout << "Enter the number of quarters: ";
    cin >> quarters;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of pennies: ";
    cin >> pennies;

    int totalCents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

    int dollars = totalCents / 100;
    int cents = totalCents % 100;

    cout << "The total value is " << dollars << " dollars and " << cents << " cents." << endl;

    return 0;
}
