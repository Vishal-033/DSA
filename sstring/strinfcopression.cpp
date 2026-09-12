// string compression
#include<bits/stdc++.h>
using namespace std;
string stringcompression(string s)
{
    string ans = "";
    int i=0;
    
    while(i<s.length())
    {
        char current =s[i];
        int count =0;
        
        while(i<s.length() && current == s[i])
        {
            count++;
            i++;
        }
        ans += current;
            ans += to_string(count);
        
        
    }
    
    return ans;
    
    
}

int main ()
{
    string s= "aaabbc";
    
     string aans =stringcompression(s);
     
     cout<<aans;
     
     return 0;
    
    
    
    
    
}