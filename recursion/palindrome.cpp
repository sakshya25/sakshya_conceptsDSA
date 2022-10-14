#include<bits/stdc++.h>
using namespace std;
// swappping ka concept use krna rehta hai array ko reverse krne ke liye 
//n-i-1 wali approach thoda easy hoti hai
bool f(int i,string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1])
    return false;
    return f(i+1,s);
}
int main(){
    string s="madsm";
    cout<<f(0,s);
                
    return 0;
}