//accept array from user and check the frequency of the element in array

#include<iostream>
using namespace std;

int Frequency(int *Arr,int iSize,int iValue)
{
    int iCnt = 0,iCount = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(Arr [iCnt] == iValue)
        {
            iCount++;
        }
    }
    
    return iCount;
}

int main()
{
    int iCnt= 0,iLength= 0,iValue = 0;
    int *Arr = NULL;
    int iRet = 0;

    cout<<"enter size of array:\n";
    cin>>iLength;

    Arr = new int(iLength);

    if(NULL == Arr)
    {
        cout<<"unable to allocate the memory\n";
        return -1;

    }

    cout<<"enter the element :\n";

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"enter element that you want the frequncy :\n";
    cin>>iValue;

    iRet = Frequency(Arr,iLength,iValue);

    if(iRet == -1)
    {
        cout<<"there is problem in input\n";
    }
    else
    {
        cout<<iValue<<" is present\t"<< iRet <<"\ttimes\n";
    }

    delete []Arr;
    return 0;
}