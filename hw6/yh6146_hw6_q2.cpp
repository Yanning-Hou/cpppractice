#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){
    int numInput;
    char symbolInput;

    cout<< "Please entre the number of triganles in the tree: ";
    cin>> numInput;
    cout<< "Please enter the charater fillinf the tree: ";
    cin>> symbolInput;

    printPineTree(numInput, symbolInput);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ; j++){
            cout << " ";
        }
        for(int j = 1; j <= n-i ; j++){
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1 ; k++){
            cout << symbol;
        }
        cout<<endl;
    }
}

void printPineTree(int n, char symbol){
    for(int i = 1; i <= n ; i++){
        printShiftedTriangle(i+1, n-i, symbol);
    }
}


