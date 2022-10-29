// printing all the subsequences of the array

// #include<bits/stdc++.h>
// using namespace std;
// void f(int index,vector<int>&vp,int arr[],int n){
//     if(index==n){
//         for(auto it : vp){
//             cout<<it<<" ";
//         }
//         if(vp.size()==0){
//             cout<<"{}";
//         }
//         cout<<endl;
//         return;
//     }

//     vp.push_back(arr[index]);
//     f(index+1,vp,arr,n);
//     vp.pop_back();
//     f(index+1,vp,arr,n);
// }
// int main(){
//      int arr[]={3,1,2};
//      int n=sizeof(arr)/sizeof(arr[0]);
//      vector<int>vp;
//      f(0,vp,arr,n);
//     return 0;
// }

// printing the subequences of the array whose sum is k

#include <bits/stdc++.h>
using namespace std;
// int sum=0;
void f(int index, vector<int> &vp, int sum, int arr[], int n, int target)
{
    if (index == n)
    {
        if (sum == target)
        {
            for (auto it : vp)
            {
                cout << it << " ";
            }
                cout << endl;
        }
        return;
    }

    vp.push_back(arr[index]);
    sum = sum + arr[index];
    f(index + 1, vp, sum, arr, n, target);
    vp.pop_back();
    sum = sum - arr[index];
    f(index + 1, vp, sum, arr, n, target);
}
int main()
{
    int arr[] = {3, 1, 2};
    int target = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vp;
    f(0, vp, 0, arr, n, target);
    return 0;
}