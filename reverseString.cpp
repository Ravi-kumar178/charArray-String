
#include<iostream>
#include<cstring>
using namespace std;

void reverseCharArray(char ch[],int n){
    int i = 0;
    int j = n-1;
    
    while(i <= j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
};

int main(){
    char ch[100];
    //taking input
    cin.getline(ch,100);
    cout<<ch<<endl;
    int len = strlen(ch);
    cout<<len<<endl;
    reverseCharArray(ch,len);
    cout<<"Reversed:"<<endl;
    cout<<ch<<endl;
}
