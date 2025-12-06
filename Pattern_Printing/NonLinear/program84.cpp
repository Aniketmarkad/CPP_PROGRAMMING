// input :-    *    *   *   *
// output :-   *    *   *   *
// output :-   *    *   *   *

#include <iostream>
using namespace std;

void Display()
{

    int i = 0;

    for(i = 1; i<= 3 ;i++)
    {
        cout<<("*\t");
    }
    cout<<"\n";

    for(i = 1; i<= 3 ;i++)
    {
        cout<<("*\t");
    }
    cout<<"\n";

    for(i = 1; i<= 3 ;i++)
    {
        cout<<("*\t");
    }
    cout<<"\n";

}

int main()
{
    
    Display();

    return 0;
}
