// create an array  take input from user and display element from array

#include<iostream>
using namespace std;

void Display(int Arr[],int iSize)
{
    cout<<"element from array is :\n";
    
    cout<<Arr[0]<<"\n";
    cout<<Arr[1]<<"\n";
    cout<<Arr[2]<<"\n";
    cout<<Arr[3]<<"\n";
    cout<<Arr[4]<<"\n";
    
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