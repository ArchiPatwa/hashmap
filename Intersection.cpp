// Intersection of 2 array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int intersection(int arr1[], int arr2[], int n, int m){
    set<int> iset;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        iset.insert(arr1[i]);
    }
    for (int j = 0; j < m; j++)
    {
       if (iset.count(arr2[j]))
       {
         cout<<arr2[j]<<",";
         count++;
         iset.erase(arr2[j]);
       }
       
    }
    cout<<endl;
    return count;
}
int main(){
    int arr1[] ={7,3,9};
    int arr2[] = {6,3,9,2,9,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    cout<<intersection(arr1, arr2, n, m);
}