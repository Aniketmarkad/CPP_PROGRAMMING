// acccept input from user and return summation element from array
#include<iostream>
using namespace std;

int Summation(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0;
    
    for(iCnt = 0;iCnt< iSize;iCnt++)
    {
        iSum =Arr[iCnt] + iSum;
    }
    return iSum;
}

int main()
{
    int Arr[5];

    int iCnt = 0,iRet = 0;
    cout<<"enter the array element :\n";
    
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = Summation(Arr,5);

    cout<<"Summation of array element is :"<<iRet<<"\n";
    return 0 ;
}