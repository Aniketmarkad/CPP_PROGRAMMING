// input :- 4
// output :- 4  3   2   1

#include <iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo ;iCnt >= 1;iCnt--)
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
