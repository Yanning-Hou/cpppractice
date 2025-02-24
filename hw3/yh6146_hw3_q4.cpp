#include <iostream>
using namespace std;

int main(){
    const int Floor_Round = 1;
    const int Ceiling_Round = 2;
    const int Round = 3;

    double real;
    int method;

    cout<<"Please enter a Real number: "<<endl;
    cin>>real;
    cout<<"Choose your rounding method:"<<endl;
    cout<<"1.Floor_Round"<<endl;
    cout<<"2.Ceiling_Round"<<endl;
    cout<<"3.Round to the nearest whole number"<<endl;
    cin>>method;

    switch (method)
    {
    case 1:
        cout<<(int)real<<endl;
        break;
    case 2:
        cout<<(int)(real + 1)<<endl;
        break;
    case 3:
        if (real - (int)real >= 0.5)
        {
            cout<<(int)real + 1<<endl;
        }else
        {
            cout<<(int)real<<endl;
        }
        break;
    }

    return 0;
}