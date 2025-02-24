#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int addition, subtraction, multiplication, integerDivision, remainder;
    double division;
    cout<<"Please enter two positive integers, separated by a space: ";
    cin>>num1>>num2;

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = static_cast<double>(num1) / num2;
    integerDivision = num1 / num2;
    remainder = num1 % num2;

    cout<<num1<<" + "<<num2<<" = "<<addition<<endl;
    cout<<num1<<" - "<<num2<<" = "<<subtraction<<endl;
    cout<<num1<<" * "<<num2<<" = "<<multiplication<<endl;
    cout<<num1<<" / "<<num2<<" = "<<division<<endl;
    cout<<num1<<" div "<<num2<<" = "<<integerDivision<<endl;
    cout<<num1<<" mod "<<num2<<" = "<<remainder<<endl;

    return 0;
}