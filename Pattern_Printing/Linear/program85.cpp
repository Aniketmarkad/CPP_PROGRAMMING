// input :-    *    *   *   *
// output :-   *    *   *   *
// output :-   *    *   *   *

#include <iostream>
using namespace std;

void Display()
{

    int i = 0,j = 0;

    for(i = 1; i<= 3 ;i++)
    {
        for(j= 1;j <= 3;j++)
        {
            cout<<("*\t");
        }
        cout<<"\n";
    }

}

int main()
{
    
    Display();

    return 0;
}
