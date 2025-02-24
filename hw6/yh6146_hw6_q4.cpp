#include <iostream>
#include <string>
using namespace std;

void printDivisors(int num);

int main(){
    int num;

    cout<< "Please enter a positive integer >= 2: ";
    cin >> num;
    printDivisors(num);

    return 0;
}

void printDivisors(int num){
    int divisor1, divisor2;
    string divisorsAll = "", divisorsPair1 ="",divisorsPair2 ="";

    for(divisor1 = 1; divisor1 <= sqrt(num); divisor1++){
        if(num%divisor1==0){
            divisorsPair1 = divisorsPair1 + to_string(divisor1) + " ";

            divisor2 = num/divisor1;
            if(divisor2!=divisor1){
                divisorsPair2 = to_string(divisor2)+ " " + divisorsPair2;
            }
        }
    }
    divisorsAll = divisorsPair1 + divisorsPair2;

    cout << divisorsAll << endl;
}