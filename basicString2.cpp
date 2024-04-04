#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    string str2;
    getline(cin,str);
    getline(cin,str2);
    cout<<str<<endl;
    cout<<str2<<endl;
   // str.insert(5,str2);
   // cout<<str<<endl;
  //   str.push_back('r');
   //  cout<<str<<endl;
  //   str.pop_back();
  //   cout<<str<<endl;
  
    if(str.find(str2) == string::npos){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }
   
    cout<<str.substr(5,4)<<endl;
    cout<<str<<endl;
}