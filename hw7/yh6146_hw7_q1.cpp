#include <iostream>
using namespace std;

int printMonthCalendar(int numDays, int startingDay);
bool isLeapYear(int year);
void printYearCalendar(int year, int startingDay);

int main(){
    int year, startingDay;
    
    cout << "Please enter the year: ";
    cin >> year;
    cout << "Please enter starting day of the year (1=Mon, 7=Sun): ";
    cin >> startingDay;

    printYearCalendar(year, startingDay);
    return 0;
}

int printMonthCalendar(int numDays, int startingDay){
    cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << endl;
    for(int i = 1; i < startingDay; i++){
        cout << "\t";
    }
    for(int j = 1; j <= numDays; j++){
        cout << j << "\t";
        if((j + startingDay - 1) % 7 == 0){
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}

bool isLeapYear(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}

void printYearCalendar(int year, int startingDay){
    int numDays;
    for(int i = 1; i <= 12; i++){
        if(i==1){
            cout << "January" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==2){
            cout << "February" << endl;
            if(isLeapYear(year)){
                numDays = 29;
                printMonthCalendar(numDays, startingDay);
                startingDay = (startingDay + numDays) % 7;
                cout << endl;
             
            }
            else{
                numDays = 28;
                printMonthCalendar(numDays, startingDay);
                startingDay = (startingDay + numDays) % 7;
                cout << endl;
            }
        }
        else if(i==3){
            cout << "March" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==4){
            cout << "April" << endl;
            numDays = 30;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==5){
            cout << "May" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==6){
            cout << "June" << endl;
            numDays = 30;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==7){
            cout << "July" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==8){
            cout << "August" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==9){
            cout << "September" << endl;
            numDays = 30;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==10){
            cout << "October" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==11){
            cout << "November" << endl;
            numDays = 30;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
        else if(i==12){
            cout << "December" << endl;
            numDays = 31;
            printMonthCalendar(numDays, startingDay);
            startingDay = (startingDay + numDays) % 7;
            cout << endl;
        }
    }
    
}

