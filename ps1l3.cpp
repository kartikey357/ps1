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

char encodeLowerCase (char c,int shift)
{
    if (((int)c)+shift<=122)
        return char(c+shift);
    else if (c==' ')
        return c;
    else  if (((int)c)+shift>=122)  
    return char (c+shift-26);
}

int main ()
{
    string s,shiftings;
    cout << "enter sentence"<< endl;
    getline (cin , s);

    cout << "enter shifting word"<< endl;
    cin >> shiftings;
    int shiftnum[shiftings.size()];

    for (int i=0;i<shiftings.size();i++)
    {
        if (shiftings[i]>=97 && shiftings[i]<=122)
            shiftnum[i]=shiftings[i]-97+1;
        else if (shiftings[i]>=65 && shiftings[i]<=90)
            shiftnum[i]=shiftings[i]-65+1;
    }

    string news="";
    int j=0;
    for (int i=0;i<s.size();i++)
    {
        if (j>=shiftings.size()){
            while (j>=shiftings.size() -1 )
            {
                j=0;
            }
        }
        if (s[i]>=97 && s[i]<=122)
            news+= encodeLowerCase(s[i],shiftnum[j]);
        else if (s[i]>=65 && s[i]<=90)
            news+= encodeUpperCase (s[i],shiftnum[j]);
        else
        {
            news+=s[i];
            j--;
        }
        j++;
    }
    cout << "shifted word is = "<< news << endl;
    return 0;
}
