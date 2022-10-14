#include<bits/stdc++.h>
using namespace std;
void f(int index,vector<int>&vp,int arr[],int n){
    if(index==n){
        for(auto it : vp){
            cout<<it;
        }
        cout<<endl;
        return;
    }
    vp.push_back(arr[index]);
    f(index+1,vp,arr,n);
    vp.pop_back();
    f(index+1,vp,arr,n);
}
int main(){
     int arr[]={3,1,2};
     int n=sizeof(int)/sizeof(arr[0]);
     vector<int>vp;
     f(0,vp,arr,n);
    return 0;
}