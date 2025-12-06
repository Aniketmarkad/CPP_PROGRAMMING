// input :-    4   *
// output :-   *    *     *    *

// input :-    4   $
// output :-   $    $   $   $

#include <iostream>
using namespace std;

void Display(int iNo,char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo ;iCnt >= 1;iCnt--)
    {
        cout<<ch<<"\t";
    }
}

int main()
{
    int iValue = 0;
    char ch = '\0';

    cout<<"enter frequency :\n";
    cin>>iValue;

    cout<<"enter the charcter :\n";
    cin>>ch;

    Display(iValue,ch);

    return 0;
}
