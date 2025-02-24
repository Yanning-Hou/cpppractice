#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    double discriminant;

    cout<<"Please enter value of a: ";
    cin>>a;
    cout<<"Please enter value of b: ";
    cin>>b;
    cout<<"Please enter value of c: ";
    cin>>c;

    if(a == 0){
        if(b == 0){
            if(c == 0){
                cout<<"This equation has infinite solutions."<<endl;
            }
            else{
                cout<<"This equation has no solution."<<endl;
            }
        }
        else{
            cout<<"This equation has a single real solution: x = "<<-c/b<<endl;
        }
    }
    else{
        discriminant = pow(b,2) - 4*a*c;
        if(discriminant < 0){
            cout<<"This equation has no real solutions."<<endl;
        }
        else if(discriminant == 0){
            cout<<"This equation has a single real solution: x = "<<-b/(2*a)<<endl;
        }
        else{
            cout<<"This equation has two real solutions: x = "<<(-b + sqrt(discriminant))/(2*a)<<" and x = "<<(-b - sqrt(discriminant))/(2*a)<<endl;
        }
    }

    return 0;
}