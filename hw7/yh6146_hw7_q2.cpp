#include <iostream>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main(){
    int m;
    
    cout << "Please enter a postive integer >= 2: ";
    cin >> m;

    cout << "All the perfect numbers between 2 and " << m << " are:" << endl;
    for (int i = 2; i <= m; i++){
        if(isPerfect(i)){
            cout << i << endl;
        }
    }
    cout << "All pairs of amicable numbers between 2 and " << m << " are:" << endl;
    int count = 0;
    for (int j = 2; j <=m; j++)
    {
        int countDivs = 0;
        int sumDivs = 0;
        int pair;
        analyzeDividors(j, countDivs, sumDivs);
        if(sumDivs <= m && sumDivs > j){ 
            pair = sumDivs;
            countDivs = 0;
            sumDivs = 0;
            analyzeDividors(pair, countDivs, sumDivs);
            if(sumDivs == j){
                cout << j <<" "<< pair << endl;
                count++;
            }
        }
    }
    if(count == 0){
            cout << "None" << endl;
    }

    return 0;   
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    int divisor1, divisor2;
    for( divisor1 = 1; divisor1 < sqrt(num); divisor1++){
        if(num % divisor1 == 0){
            outCountDivs++;
            outSumDivs += divisor1;
            divisor2 = num / divisor1;
            if(divisor2 != divisor1 && divisor2 != num){
                outCountDivs++;
                outSumDivs += divisor2;
            }
        }
    }
}

bool isPerfect(int num){
    int countDivs = 0;
    int sumDivs = 0;
    analyzeDividors(num, countDivs, sumDivs);
    if(sumDivs == num){
        return true;
    }
    else{
        return false;
    }
}
