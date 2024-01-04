#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
map<int, int> mapInsert(int arr[], int n){
    map<int, int>m;
    for (int i = 0; i < n; i++)
    {
       m[arr[i]] = i;
    }
    return m;
}
void mapdisplay(map<int, int>m){
for(auto i:m){
    cout<<i.first<<":"<<i.second<<endl;
}
}
void maperase(map<int, int> &m, int x){
    if (m.find(x) != m.end())
    {
        m.erase(x);
        cout<<"Erased"<<x<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    
}
int main(){
    int arr[] = {2,3,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    map<int, int> m = mapInsert(arr, n);
    mapdisplay(m);
    maperase(m, 5);
    mapdisplay(m);
}