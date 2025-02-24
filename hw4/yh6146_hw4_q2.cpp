#include <iostream>
#include <string>
using namespace std;

int main(){
    int numDecimal;
    string numRoman = "";

    cout << "Enter a decimal number: "<< endl;
    cin >> numDecimal;

    int numM = numDecimal / 1000;
    int numD = (numDecimal % 1000) / 500;
    int numC = (numDecimal % 500) / 100;
    int numL = (numDecimal % 100) / 50;
    int numX = (numDecimal % 50) / 10;
    int numV = (numDecimal % 10) / 5;
    int numI = numDecimal % 5;

    if (numM > 0){
        for(int i = 0; i < numM; i++){
            numRoman += "M";
        }
    }
    if (numD > 0){
        for(int i = 0; i < numD; i++){
            numRoman += "D";
        }
    }
    if (numC > 0){
        for(int i = 0; i < numC; i++){
            numRoman += "C";
        }
    }
    if (numL > 0){
        for(int i = 0; i < numL; i++){
            numRoman += "L";
        }
    }
    if (numX > 0){
        for(int i = 0; i < numX; i++){
            numRoman += "X";
        }
    }
    if (numV > 0){
        for(int i = 0; i < numV; i++){
            numRoman += "V";
        }
    }
    if (numI > 0){
        for(int i = 0; i < numI; i++){
            numRoman += "I";
        }
    }
    
    cout << numDecimal << " is " << numRoman << endl;
    
    return 0;
}