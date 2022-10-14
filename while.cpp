#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
//     //  program for sum of n numbers

     int i=2,sum=0;
//     //  while(i<=n){
//     //     sum+=i;
//     //     i=i+2;
//     //  }
//     // sum=n*(n+1);
//     //  cout<<sum<<endl;

//     // program for prime numbers
    int flag=0;
    while(i<n){
        if(n%i!=0){
            i++;
        }
        else{
            flag =1;
            break;
        }
    }
if(flag==1){
    cout<<"not prime"<<endl;
}
else{
    cout<<"prime"<<endl;
}
    
    return 0;
}
// #include<iostream>

// using namespace std;

// int main()
// {
//     char ch;
//     cout<<"Enter any character "<<endl;
//     cin>>ch;
    
//     if(ch>=65 && ch<=90){
//       cout<<"This is upper case"<<endl;  
//     }
//     else if(ch>=48 && ch<=57){
//         cout<<"This is numeric"<<endl;
//     }
//     else if(ch>=97 && ch<=122){
//         cout<<"This lower case";
//     }
//     return 0;
// }