#include<bits/stdc++.h>
using namespace std;

string reversestring(string s)
{
    stringstream ss(s);

    string word;
    string ans;

    while(ss >> word)
    {
        //ans = word+" "+ans;
         ans = ans+" "+word;
    }

    return ans;
}
int main ()
{
    
    string s = " hello vishal  sharma";
    
    string ans = reversestring(s);
    
cout<< ans;
    return 0;
    
}