
#include<iostream>
#include<cstring>
using namespace std;

void replaceChar(char ch[],int n){
    int i = 0;
    while(ch[i] != '\0'){
        if(ch[i] == '@'){
            ch[i] = ' ';
        }
        i++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before: "<<ch<<endl;
    replaceChar(ch,strlen(ch));
    cout<<"After: "<<ch<<endl;
    return 0;
}