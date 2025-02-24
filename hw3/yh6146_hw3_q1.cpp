#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    double price1, price2;
    char clubCard;
    double taxRate;
    double basePrice, sumPriceDiscount, sumPrice;
    cout << "Enter price of first item: ";
    cin >> price1;
    cout << "Enter price of second item: ";
    cin >> price2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;
    
    basePrice = price1 + price2;
    if (price1 > price2) {
        sumPriceDiscount = price1 + price2 * 0.5;
    }else {
        sumPriceDiscount = price2 + price1 * 0.5;
    }
    if (clubCard == 'Y' || clubCard == 'y') {
        sumPriceDiscount = sumPriceDiscount * 0.9;
    }
    sumPrice = sumPriceDiscount * (1 + taxRate / 100);
    cout << "Base price: "<< fixed << setprecision(1) << basePrice << endl;
    cout << "Price after discounts: " << sumPriceDiscount << endl;
    cout << "Total price: " << sumPrice << endl;

    return 0;
}