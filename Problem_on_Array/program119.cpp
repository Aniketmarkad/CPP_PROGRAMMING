//check whether the element is present in array or not `

#include<iostream>
using namespace std;

bool Search(int *Arr,int iSize)
{
    int iCnt = 0;
    bool bFlage = false;

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(Arr [iCnt] == 11)
        {
            bFlage = true;
        }
    }
    return bFlage;
}

int main()
{
    int iCnt= 0,iLength= 0;
    int *Arr = NULL;
    bool bRet = false;

    cout<<"enter size of array:\n";
    cin>>iLength;

    Arr = new int(iLength);

    if(Arr == NULL)
    {
        cout<<"unable to allocate the memory\n";
        return -1;

    }

    cout<<"enter the element :\n";

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    bRet = Search(Arr,iLength);

    if(bRet == true)
    {
        cout<<"element is present \n";
    }
    else
    {
        cout<<"element is not present";
    }

    delete []Arr;
    return 0;
}