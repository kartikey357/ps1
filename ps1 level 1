#include <iostream>
using namespace std;

char encodeUpperCase (char c,int shift)
{
    if (((int)c)+shift<=90)
        return char(c+shift);
    else if (c==' ')
        return c;
    return char (c+shift-26);
}

char decodeUpperCase (char c,int shift)
{
    if (((int)c)-shift>=65)
        return char(c-shift);
    else if (c==' ')
        return c;
    return char (c-shift+26);
}

char encodeLowerCase (char c,int shift)
{
    if (((int)c)+shift<=122)
        return char(c+shift);
    else if (c==' ')
        return c;
    return char (c+shift-26);
}

char decodeLowerCase (char c,int shift)
{
    if (((int)c)-shift>=97)
        return char(c-shift);
    else if (c==' ')
        return c;
    return char (c-shift+26);
}

string encode(string st,int shift)
{
   string newst="";

   for (int i=0;i<st.length();i++)
   {
        char c=st[i];
        if (65<=c && c<=90)
        {
            newst+=encodeUpperCase(c,shift);
        }
        if (97<=c && c<=122)
        {
            newst+=encodeLowerCase(c,shift);
        }
        if (c==' ')
            newst+=c;
   }
   return newst;
}
string decode(string st,int shift)
{
   string newst="";

   for (int i=0;i<st.length();i++)
   {
        char c=st[i];
        if (65<=c && c<=90)
        {
            newst+=decodeUpperCase(c,shift);
        }
        if (97<=c && c<=122)
        {
            newst+=decodeLowerCase(c,shift);
        }
        if (c==' ')
            newst+=c;
   }

   return newst;
}

int main ()
{
    string s;
    cout << "enter string " <<endl;
    getline(cin , s);
    int shift;
    cout << "enter shift " <<endl;
    cin >> shift;
    int pointer;
    cout << "enter '0' to ENCODE OR '1' to DECODE " <<endl;
    cin >> pointer;

    if (pointer==0)
     cout << "ENCODED WORD = " << encode(s,shift)<<endl;
    else if (pointer==1)
     cout << "DECODED WORD = " << decode(s,shift)<<endl;
    else 
     cout << "enter valid input ";

    // ps1 level 2

    return 0;
}
