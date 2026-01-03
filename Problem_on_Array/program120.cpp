//check whether the element is present in array or not dynamically

#include<iostream>
using namespace std;

bool Search(int *Arr,int iSize,int iValue)
{
    int iCnt = 0;
    bool bFlage = false;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(Arr [iCnt] == iValue)
        {
            bFlage = true;
        }
    }
    
    return bFlage;
}

int main()
{
    int iCnt= 0,iLength= 0,iValue = 0;
    int *Arr = NULL;
    bool bRet = false;

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
    
    cout<<"enter element that you want to search :\n";
    cin>>iValue;

    bRet = Search(Arr,iLength,iValue);

    if(bRet == true)
    {
        cout<<"element is present \n";
    }
    else
    {
        cout<<"element is not present\n";
    }

    delete []Arr;
    return 0;
}