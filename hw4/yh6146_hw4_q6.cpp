#include <iostream>
using namespace std;

int main()
{
    int n;
    int oddDigitcount,evenDigitcount;
    int tensDigit, onesDigit;

    cout << "Enter a positive integer between 1 to 99: ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {   tensDigit = i/10;
        onesDigit = i%10;
        oddDigitcount = 0;
        evenDigitcount = 0;
        
        if (tensDigit % 2 == 0)
        {
            evenDigitcount++;
        }
        else
        {
            oddDigitcount++;
        }

        if (onesDigit % 2 == 0)
        {
            evenDigitcount++;
        }
        else
        {
            oddDigitcount++;
        }

        if (evenDigitcount > oddDigitcount)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
