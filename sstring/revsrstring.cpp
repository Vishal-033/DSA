#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string result = "";
    string word = "";

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            word = s[i] + word;
        }
        else
        {
            if (word != "")
            {
                if (result != "")
                {
                    result += " ";
                }

                result += word;
                word = "";
            }
        }
    }

    if (word != "")
    {
        if (result != "")
        {
            result += " ";
        }

        result += word;
    }

    return result;
}

int main()
{
    string s = "  hello   world  ";

    string ans = reverseWords(s);

    cout << ans;

    return 0;
}