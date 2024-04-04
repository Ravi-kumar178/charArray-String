#include<iostream>
#include<cstring>
using namespace std;

void convertToUpperCase(char ch[], int n){
    for(int i = 0; i < n; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i] = ch[i]-'a'+'A';
        }
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before Conversion: "<<ch<<endl;
    convertToUpperCase(ch,strlen(ch));
    cout<<"After Conversion: "<<ch<<endl;
}