//check weather the character is Capital or not.

#include<iostream>

using namespace std;

bool CheckCapital(char ch)
{
    if(ch >= 65 && ch <= 90)
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

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        cout<<ch<<" : is capital \n";
    }
    else
    {
        cout<<ch<<" : is not capital \n";
    }

    return 0;
}