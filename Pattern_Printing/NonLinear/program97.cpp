// input :-  4. 4
// output ;-   *    *   *   *
// output :-   o    o   o   o
// output :-   o    o   o   o
// ouput  :-   *    *   *   *

#include <iostream>
using namespace std;

void Display(int iRow,int iCol)
{

    int i = 0,j = 0;
    
    for(i = 1; i<= iRow ;i++)
    {
        for(j= 1;j <= iCol;j++)
        {
            if(j == 1 || i == iCol)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"o\t";
            }
        }
        cout<<"\n";
    }

}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    
    cout<<"enter the number of row :\n";
    cin>>iValue1;

    cout<<"enter the number of column:\n";
    cin>>iValue2;
    
    Display(iValue1,iValue2);

    return 0;
}
 