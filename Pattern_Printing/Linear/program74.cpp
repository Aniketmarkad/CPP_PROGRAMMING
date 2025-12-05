// input :- 4
// output :- 1  2   3   4

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
        cout<<iCnt<<"\t";
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
