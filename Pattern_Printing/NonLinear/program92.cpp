// input :-  4. 4
// output ;-   A    B   C   D   
// output :-   E    F   G   H
// output :-   I    J   K   L 
// ouput  :-   M    N   O   P

#include <iostream>
using namespace std;

void Display(int iRow,int iCol)
{

    int i = 0,j = 0;
    char ch = 'A';
    

    for(i = 1; i<= iRow ;i++)
    {
        for(j= 1;j <= iCol;j++,ch++)
        {
            cout<<ch<<"\t";
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
 