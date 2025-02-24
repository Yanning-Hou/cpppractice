#include <iostream>
using namespace std;

int main(){
    
    int n;
    

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int output = i * j;
            cout << output << "\t";
        }
        cout << endl;
        
    }

    return 0;
}