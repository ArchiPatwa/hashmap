// Union of 2 array (S D)
#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int unionofarray(int arr1[], int arr2[], int n, int m){
   set<int> uset;
   for (int i = 0; i < n; i++)
   {
     uset.insert(arr1[i]);
   }
   for (int j = 0; j < m; j++)
   {
     uset.insert(arr2[j]);
   }
   return uset.size();
}
int main(){
    int arr1[] = {7,3,9};
    int arr2[] = {6,3,9,2,9,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    cout<<unionofarray(arr1, arr2, n, m);
}