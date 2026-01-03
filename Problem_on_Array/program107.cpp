// create an array  take input from user and display using loop

#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    cout<<"enter the array element\n";

    int iCnt = 0;
    for(iCnt = 0;iCnt< 5;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"element froma array is :\n";

    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    return 0 ;
}