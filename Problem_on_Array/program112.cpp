//Accpect input from user and allocate dynamic memory for array and display element after use get completed deallocate the memory 

#include<iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int *Arr = NULL;

    cout<<"enetr the length of array:\n";
    cin>>iLength;

    Arr = new int(iLength);

    if(Arr == NULL)
    {
        cout<<"unable to allocate memory \n";
        return -1;
    }

    cout<<"enter the element :\n";
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"entered element from the array:\n";

    for(iCnt = 0;iCnt< iLength ;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete[]Arr;

    return 0;
}