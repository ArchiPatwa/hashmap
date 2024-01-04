#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, string> Employees;
     map<int, string>::iterator ii;
    cout<<Employees.empty()<<endl;
    Employees[101] = "Nikita";  
   Employees[105] = "John";  
   Employees[103] = "Dolly";  
   Employees[104] = "Deep";  
   Employees[102] = "Aman";  

   cout<<"Employee[104]"<<Employees[104]<<endl;
   cout<<"Map Size"<<Employees.size()<<endl;
  
   for(ii=Employees.begin(); ii!=Employees.end(); ii++){
    cout<<(*ii).first<<":"<<(*ii).second<<endl;
   }
   Employees.clear();
   cout<<"Map Size"<<Employees.size()<<endl;
  
}


