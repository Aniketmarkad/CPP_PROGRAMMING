//print element from array using loop

#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int iCnt = 0;
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    return 0 ;
}