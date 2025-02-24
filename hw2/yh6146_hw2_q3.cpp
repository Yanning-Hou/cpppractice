#include <iostream>
using namespace std;

int main(){
    int dayJohn, hourJohn, minuteJohn;
    int dayBill, hourBill, minuteBill;
    int minuteCalculation;
    int dayTotal, hourTotal, minuteTotal;

    cout<<"Please enter the number of days John has worked: ";
    cin>>dayJohn;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>hourJohn;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>minuteJohn;
    cout<<"Please enter the number of days Bill has worked: ";
    cin>>dayBill;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>hourBill;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>minuteBill;

    minuteCalculation = (dayJohn + dayBill) * 24 * 60 + (hourJohn + hourBill) * 60 + minuteJohn + minuteBill;
    dayTotal = minuteCalculation / (24 * 60);
    hourTotal = (minuteCalculation % (24 * 60)) / 60;
    minuteTotal = (minuteCalculation % (24 * 60)) % 60;

    cout<<"The total time both of them worked together is: "<<dayTotal<<" days, "<<hourTotal<<" hours and "<<minuteTotal<<" minutes."<<endl;
}