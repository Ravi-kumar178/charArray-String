#include<iostream>
#include<cstring>
using namespace std;

int findLength(char ch[]){
    int index = 0;
  //  int count = 0;
    while(ch[index] != '\0'){
   //     count++;
        index++;
    }
    return index;
}

int main(){
    char ch[100];

    /*Taking input*/
   // cin >>ch;
   cin.getline(ch,100);
    cout<<ch<<endl;
    cout<<"Character at 3rd index: "<<ch[3]<<endl;
    int value = (int)ch[4];
    cout<<"Value at 4th index: "<<value<<endl;
    
    //Find the length of the string
    int len = findLength(ch);
    
    cout<<"The length of the char array is: "<<len<<endl;
    
    int length = strlen(ch);
    cout<<"Length is: "<<length<<endl;
    
    //print char array
    for(int i = 0; i < length; i++){
        cout<<"Index: "<<i<<"Value: "<<ch[i]<<endl;
    }
    
    return 0;
}