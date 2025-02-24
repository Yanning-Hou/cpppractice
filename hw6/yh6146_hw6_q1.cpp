#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int num, fibSum;

    cout<< "Please enter a positive integer:";
    cin>>num;

    fibSum = fib(num);

    cout<< fibSum<< endl;

    return 0;
}

int fib(int n){
    int numFib1 = 1;
    int numFib2 = 1;
    int numFibi;
    if(n==1 || n==2){
        numFibi=1;
    }
    else{
        
        for(int i = 3; i<=n; i++){
        numFibi = numFib1 + numFib2;
        numFib1 = numFib2;
        numFib2 = numFibi;
        }
    }
    return numFibi;
}
