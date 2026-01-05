//check weather the character is Digit or not.

#include<iostream>

using namespace std;

bool CheckDigit(char ch)
{
    if(ch >= 0 && ch <= 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter the character :\n";
    cin>>ch;

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
        cout<<ch<<" : is digit \n";
    }
    else
    {
        cout<<ch<<" : is not digit \n";
    }

    return 0;
}