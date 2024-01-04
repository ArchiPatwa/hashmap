#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
string reversal(string s, int n){
    map<char, int> exists;
    string ans = "";
    for (int i = n; i >= 0; i--)
    {
        if (exists.find(s[i]) == exists.end())
        {
            ans += s[i];
            exists.insert({s[i], 1});
        }
        
    }
    return ans;
}
int main(){
    string s = "GEEKS FOR GEEKS";
    int n = s.length();
    string res = reversal(s, n);
    for (int i = 0; i < res.length(); i++)
    {
       cout<<res[i];
    }
    
    
}