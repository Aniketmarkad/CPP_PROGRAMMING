// create an array  take input from user and display using loop

#include<iostream>
using namespace std;

int main()
{
    int Arr[5];

    cout<<"enter the array element\n";

    cin>>Arr[0];
    cin>>Arr[1];
    cin>>Arr[2];
    cin>>Arr[3];
    cin>>Arr[4];

    cout<<"element froma array is :\n";

    int iCnt = 0;
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    return 0 ;
}