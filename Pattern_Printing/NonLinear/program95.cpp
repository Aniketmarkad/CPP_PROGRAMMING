// input :-  4. 4
// output ;-   a    a   a   a 
// output :-   B    B   B   B
// output :-   c    c   c   c
// ouput  :-   D    D   D   D
#include <iostream>
using namespace std;

void Display(int iRow,int iCol)
{

    int i = 0,j = 0;
    char ch = '\0',ch1 = '\0';
    
    for(i = 1,ch ='a',ch1 = 'A'; i<= iRow ;i++,ch++,ch1++)
    {
        for(j= 1;j <= iCol;j++)
        {
            if(i % 2 == 0)
            {
                cout<<ch1<<"\t";
            }
            else
            {
                cout<<ch<<"\t";
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
 