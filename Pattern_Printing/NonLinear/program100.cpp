// input :-  4. 4
// output ;-   o    *   *   *
// output :-   o    o   *   *
// output :-   o    o   o   *
// ouput  :-   o    o   o   o

#include <iostream>
using namespace std;

void Display(int iRow,int iCol)
{

    int i = 0,j = 0;
    
    for(i = 1; i<= iRow ;i++)
    {
        for(j= 1;j <= iCol;j++)
        {
            if(i >= j)
            {
                cout<<"o\t";
            }
            else
            {
                cout<<"*\t";
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
 