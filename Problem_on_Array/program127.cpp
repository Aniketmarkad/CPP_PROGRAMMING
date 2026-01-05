//accept array from user and check the maximum and minimum  element in array

#include<iostream>
using namespace std;

void MaximumMinimum(int *Arr,int iSize)
{
    int iCnt = 0,iMin = Arr[0];

    if((Arr == NULL) || (iSize <= 0))
    {
        return ;
    }

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(iMin > Arr [iCnt] )
        {
            iMin = Arr[iCnt];
        }
    }
    
    int iMax = Arr[0];

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    cout<<"minimum element is :"<<iMin<<"\n";
    cout<<"maximum element is :"<<iMax<<"\n";
}

int main()
{
    int iCnt= 0,iLength= 0;
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

    MaximumMinimum(Arr,iLength);

    delete []Arr;
    return 0;
}