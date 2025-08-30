#include <iostream>
using namespace std;
double cscore(string word)
{
    double s[]={8.17,1.49,2.78,4.25,12.70,2.23,2.02,6.09,6.97,0.15,0.77,4.03,2.41,6.75,7.51,1.93,0.1,5.99,6.33,9.06,2.76,0.98,2.36,0.15,1.97,0.07};
    // char ch []={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    double score=0.0;
    int index=0;
    for (int i=0; i<word.length();i++)
    {
        char c = word[i];
        if (c>=97 && c<=122)
        index= (int)c-97;
        else if (c>=65 && c<=90)
        index=(int)c-65;
        score += s[index];
    }
   return score; 
}

char decodeUpperCase (char c,int shift)
{
    if (((int)c)-shift>=65)
        return char(c-shift);
    else if (c==' ')
        return c;
    return char (c-shift+26);
}

char decodeLowerCase (char c,int shift)
{
    if (((int)c)-shift>=97)
        return char(c-shift);
    else if (c==' ')
        return c;
    return char (c-shift+26);
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
    string s;string word;double score;string deword="";
    double mscore=0;
    cout << "enter sentence" << endl;
    getline(cin , s);
    s=s+" ";
    for (int i=0; i<s.length();i++)
    {
        char ch= s[i];
        if (ch!=' ')
            word+=ch;
        else{
            mscore=0;
            for (int s=1;s<=25;s++)
            {
                string nword=decode(word,s);
                score=cscore(nword);
                if (mscore <= score){
                    mscore=score;
                    deword=nword;
                }
            }
            cout << deword << " ";
            word ="";
        }
    }
    return 0;
}
