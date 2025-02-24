#include <iostream>
using namespace std;

int main(){
    
    cout << "section a" << endl;
    
    int n1;
    int sectiona;
    
    cout << "Please enter a positive integer: ";
    cin >> n1;

    int i = 1;
    while (i<=n1)
    {
        sectiona = 2* i;
        cout << sectiona << endl;
        i++;
    }


    cout << "section b" << endl;
    int n2;
    int sectionb;
    
    cout << "Please enter a positive integer: ";
    cin >> n2;
    
    for (int j = 1 ; j <= n2; j++)
    {
        sectionb = 2* j;
        cout << sectionb << endl;
    }
    
    
    return 0;
}