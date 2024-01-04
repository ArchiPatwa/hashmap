// FInd Itinerary from tickets
#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;
string getStart(map<string, string> tick){
    map<string, string> revmap;
    for(auto key : tick){
      revmap.insert({key.second, key.first});
    }
    for(auto key : tick){
        if (!revmap.count(key.first))
        {
          return key.first;
        }
        
    }
    return NULL;
}
int main(){
    map<string, string> tickets;
    tickets.insert({"chennai", "Bengluru"});
    tickets.insert({"Mumbai", "Delhi"});
    tickets.insert({"Goa", "chennai"});
    tickets.insert({"Delhi", "Goa"});
    string start = getStart(tickets);

    while (tickets.count(start))
    {
        cout<<start<<endl;
        start = tickets[start];
    }
    cout<<start<<endl;
}