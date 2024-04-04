#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string name;
    string str2;
    
    cin>>name;
     getline(cin,name);
    getline(cin,str2);
    cout<<name<<endl;
    cout<<name[0]<<endl;
     int i = 0;
    while(name[i] != '\0'){
            cout<<"index: "<<i<<" value: "<<name[i]<<endl;
        i++;
    }
    
    int n = name.length();
    cout<<"Size : "<<n<<endl;
    
  cout<<name.empty()<<endl;
     cout<<name.at(3)<<endl;
    cout<<name.front()<<endl;
     cout<<name.back()<<endl;
    cout<<name.append(str2)<<endl;
   string store = name.erase(4,3);
   cout<<store<<endl;
    cout<<name<<endl;
   
   
    
}