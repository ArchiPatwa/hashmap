// Subarray sum equal to k
#include <iostream>
#include <map>
using namespace std;
int main(){
    int arr[] = {10,2,-2,-20,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = -10;
    map<int, int> map; 
    map.insert({0, 1});
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
       sum += arr[i];
       if (map.count(sum-k))
       {
          ans += map[sum-k];
       }
       if (map.count(sum))
       {
         map[sum] = map[sum]+1;
       }
       else
       {
        map.insert({sum, 1});
       }
       
    }
    cout<<ans<<endl;
}