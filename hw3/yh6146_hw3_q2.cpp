#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int graduationYear, currentYear;

    cout <<"Please enter you name: ";
    cin >> name;
    cout <<"Please enter your graduation year: ";
    cin >> graduationYear;
    cout <<"Please enter currnt year: ";
    cin >> currentYear;

    if (graduationYear - currentYear <= 0){
        cout << name << ", you are graduated" << endl;
    }else if (graduationYear - currentYear == 1){
        cout << name << ", you are a Senior" << endl;
    }else if (graduationYear - currentYear == 2){
        cout << name << ", you are a Junior" << endl;
    }else if (graduationYear - currentYear == 3){
        cout << name << ", you are a Sophomore" << endl;
    }else if (graduationYear - currentYear == 4){
        cout << name << ", you are a Freshman" << endl;
    }else{
        cout << name << ", you are not in college yet" << endl;
    }   
    return 0;

}