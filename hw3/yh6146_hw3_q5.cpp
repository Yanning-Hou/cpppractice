#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double weightPound, heightInch, BMI;
    double weightKG, heightM;

    cout<<"Please enter weight (in pounds): ";
    cin>>weightPound;
    cout<<"Please enter height (in inches): ";
    cin>>heightInch;

    weightKG = weightPound * 0.453592;
    heightM = heightInch * 0.0254;
    BMI = weightKG / pow(heightM, 2);

    if (BMI < 18.5){
        cout<<"The weight status is: Underweight"<<endl;
    }else if (BMI >= 18.5 && BMI < 25){
        cout<<"The weight status is: Normal"<<endl;
    }else if (BMI >= 25 && BMI < 30){
        cout<<"The weight status is: Overweight"<<endl;
    }else{
        cout<<"The weight status is: Obese"<<endl;
    }

    return 0;
}