// fibonaccci series-best example of multiple recursive calls
// before ending one recursive call there is no call for others

#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
   return fibo(n-1)+fibo(n-2);
}
int main(){
     int j=0,n;cin>>n;
     for (int i = 1; i <= n; i++)
     {
        cout<<fibo(j)<<" ";
     j++;
     }
     
     
    return 0;
}