#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char ch[],int n){
    int i = 0;
    int j = n-1;
    
    while(i <= j){
        if(ch[i] != ch[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<ch<<endl;
    bool found = checkPalindrome(ch,strlen(ch));
    
    if(found){
        cout<<"Valid Palindrome"<<endl;
    }
    else{
        cout<<"Invalid Palindrome"<<endl;
    }
    return 0;
}
