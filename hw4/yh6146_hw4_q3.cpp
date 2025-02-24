#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int numDecimal;
    string numBinary = "";

    cout << "Enter a decimal number: "<< endl;
    cin >> numDecimal;

    while(numDecimal > 0){
        numBinary = to_string(numDecimal % 2) + numBinary;
        numDecimal = numDecimal/2;
        
    }
    cout << "The binary representation of " << numDecimal << " is " << numBinary << endl;


    return 0;
}