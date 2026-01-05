//accept input from user and display ascii value of that character .

#include<iostream>
using namespace std;

int main()
{
    char ch = '\0';

    cout<<"Enter the Character :\n";

    cin>>ch;

    cout<<"ASCII value of "<<ch<<"is :"<<(int)ch<<"\n";

    return 0;
}