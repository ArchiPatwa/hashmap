// majority ELement (shraddha didi)
#include <iostream>
#include <map>
using namespace std;
void majorityele(int num[], int n){
    map<int, int> m;
    
   
    for (int i = 0; i < n; i++)
    {
        if (m.count(num[i]))
        {
           
        m[num[i]] = m[num[i]]+1;
        }
        else
        {
            m.insert({num[i], 1});
        }
        
    }
   
   for(auto i : m){
    if(i.second > n/3){
        cout<<i.first<<endl;
    }
   }
    // map<int, int>::iterator ii;
    // for(ii = m.begin(); ii != m.end(); ii++){
    //    cout<<(*ii).first<<":"<<(*ii).second<<endl;
    // }
    
}
int main(){
    int num[] = {1,3,2,5,1,3,1,5,1};
     int n = sizeof(num)/sizeof(num[0]);
    majorityele(num, n);
}