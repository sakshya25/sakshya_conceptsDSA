#include<bits/stdc++.h>
using namespace std;
int main(){
    // char a='a';
    // cout<<a;            
    // char ch=5;
    // cout<<ch;
    // int a;
    // cin>>a;
    // cout<<a<<" is negative"<<endl;
    char chill;
    cin>>chill;
    if(chill>=97 && chill<=122)
          cout<<"This is a lower case"<<endl;
    else if(chill>=65 &&chill<=90)
        cout<<"Thiis is upper case"<<endl;
    else if(chill>=48 && chill<=57){
        cout<<"This is  numeric"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}