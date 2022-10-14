// 1.// #include<bits/stdc++.h>
// using namespace std;

// void repeatname(int i,string s){
//     if(i==5){
//         return;
//     }
//     cout<<s<<endl;
//     i++;
//     repeatname(i,s);
// }
// int main(){
//      string s;
//      cin>>s;
//      repeatname(0,s);
//     return 0;
// }


// 2.parameterised and functional recursion
// finding sum of n number

// 1.parametrised way

// #include<bits/stdc++.h>
// int printsum(int n,int sum){
//     if(n==0){
        
//         return sum;
//     }
//     return printsum(n-1,sum+n);
// }
// using namespace std;
// int main(){
//        int n;
//        cin>>n;
//        cout<<printsum(n,0);         
//     return 0;
// }
// 2.functional approach
// #include<bits/stdc++.h>
// using namespace std;
// int printsum(int n){
//     if(n==0){
        
//         return 0;
//     }
//     return n+printsum(n-1);   //iss line mein printsum(0)ki value 0      return hui hai
// }
// int main(){
//      int n;
//      cin>>n;
//         cout<<printsum(n);
//     return 0;
// }

//REVERSE AN ARRAY

#include<bits/stdc++.h>
using namespace std;
// void f(int l,int arr[],int r){     ///first recursive method with two  variable
//     if(l>=r){
//         return ;
//     }
//     swap(arr[l],arr[r]);
//     f(l+1,arr,r-1);
// }

// second recursive method with one variable
void f(int i,int arr[],int n){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int arr[] ={3,6,2,7,9};
    int n=5;
    f(0,arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}