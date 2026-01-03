//Accpect input from user and allocate dynamic memory for array and count odd element after use get completed deallocate the memory 

#include<iostream>
using namespace std;

int CountOdd(int *Arr,int iSize)
{
    int iCnt= 0,iCount = 0;
    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
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

    iRet = CountOdd(Arr,iLength);

    cout<<"Odd element is :"<<iRet<<"\n";
    delete[]Arr;
    return 0;
}