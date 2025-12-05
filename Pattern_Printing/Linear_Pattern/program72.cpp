// input :- 4
// output :- *  *   *   *

#include <iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ;iCnt <= iNo;iCnt++)
    {
        cout<<"* \t";
    }
}

int main()
{
    int iValue = 0;

    cout<<"enter frequency :\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}
