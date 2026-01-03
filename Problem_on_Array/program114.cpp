//Accpect input from user and allocate dynamic memory for array and return summation of element after use get completed deallocate the memory 


#include<iostream>
using namespace std;

int Summation(int *Arr,int iSize)
{
    int iCnt= 0,iSum = 0;
    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iLength = 0,iCnt= 0,iRet = 0;
    int * Arr = NULL;

    cout<<"enter the size of array:\n";
    cin>>iLength;

    Arr = new int(iLength);

    if(Arr == NULL)
    {
        cout<<"unable to allocate the memory\n";
        return -1;
    }

    cout<<"enter the element in array:\n";
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = Summation(Arr,iLength);

    cout<<"summation of element is :"<<iRet<<"\n";
    delete[]Arr;
    return 0;
}