//accept array from user and check the miximum  element in array

#include<iostream>
using namespace std;

int Maximum(int *Arr,int iSize)
{
    int iCnt = 0,iMax = Arr[0];

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(iMax < Arr [iCnt] )
        {
            iMax = Arr[iCnt];
        }
    }
    
    return iMax;
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

    iRet = Maximum(Arr,iLength);

    if(iRet == -1)
    {
        cout<<"there is problem in input\n";
    }
    else
    {
        cout<<" maximum element is : "<< iRet<<"\n" ;
    }

    delete []Arr;
    return 0;
}