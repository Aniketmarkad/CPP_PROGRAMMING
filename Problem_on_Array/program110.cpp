// create an array  take input from user and display element from array using loop

#include<iostream>
using namespace std;

void Display(int Arr[],int iSize)
{
    cout<<"element from array is :\n";

    int iCnt = 0;
    
    for(iCnt = 0;iCnt< iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    
}

int main()
{
    int Arr[5];

    int iCnt = 0;
    cout<<"enter the array element :\n";
    
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Display(Arr,5);
    return 0 ;
}