//check weather the character is small or not.

#include<iostream>

using namespace std;

bool CheckSmall(char ch)
{
    if(ch >= 97 && ch <= 122)
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

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        cout<<ch<<" : is small \n";
    }
    else
    {
        cout<<ch<<" : is not small \n";
    }

    return 0;
}