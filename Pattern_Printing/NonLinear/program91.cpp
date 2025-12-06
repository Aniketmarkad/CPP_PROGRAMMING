// input :-  4. 4
// output ;-  1  *   3   *
// output ;-  1  *   3   *
// output ;-  1  *   3   *
// output ;-  1  *   3   *

#include <iostream>
using namespace std;

void Display(int iRow,int iCol)
{

    int i = 0,j = 0;
    

    for(i = 1; i<= iRow ;i++)
    {
        for(j= 1;j <= iCol;j++)
        {
            if(j % 2 == 0)
            {
                cout<<"* \t";
            }
            else
            {
                cout<<j<<"\t";
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
 