#include <iostream>
#include <string>
using namespace std;

int main(){
    string day;
    int hour, minute, length;
    char colon;

    cout<<"Please enter the day of the week the call was made in following format: "<<endl;
    cout<<"Mo for Monday"<<endl;
    cout<<"Tu for Tuesday"<<endl;
    cout<<"We for Wednesday"<<endl;
    cout<<"Th for Thursday"<<endl;
    cout<<"Fr for Friday"<<endl;
    cout<<"Sa for Saturday"<<endl;
    cout<<"Su for Sunday"<<endl;
    cin>>day;
    cout<<"Please enter the time the call was started in 24-hour notation: "<<endl;
    cout<<"For example, 1:30 pm is entered as 13:30"<<endl;
    cin>>hour>>colon>>minute;
    cout<<"Please enter the length of the call in minutes: "<<endl;
    cin>>length;

    if (day == "Sa" || day == "Su"){
        cout<<"The cost of the call is: $"<<length * 0.15<<endl;
    }else if ((hour >= 8 && hour < 18)||(hour == 18 && minute == 0)){
        cout<<"The cost of the call is: $"<<length * 0.40<<endl;
    }else{
        cout<<"The cost of the call is: $"<<length * 0.25<<endl;
    }
    
    return 0;
}