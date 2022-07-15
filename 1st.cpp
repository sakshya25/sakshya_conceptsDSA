// reverse array using iterative method

// #include<bits/stdc++.h>
// using namespace std;
// void reverseArray(int arr[],int n){
//     int temp,start=0,end=n-1;
//     while(start<end)
//     {
//         arr[temp]=arr[start];
//         arr[start]=arr[end];
//         arr[end]=arr[temp];
//         start++;
//         end--;
//     }
    
// }
// void printarray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//   int arr[5]={3,2,5,8,6}; 
//   printarray(arr,5);
//     reverseArray(arr,5);
//     printarray(arr,5);
//     return 0;
// }
// reverse array using recursive approach
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int start,int end){
    int temp;
        if(start>=end)
        return;
 
        swap(arr[start],arr[end]);
        // start++;
        // end--;
        reverseArray(arr,start+1,end-1);
    
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={3,2,5,8,6}; 
    int start=0,end=4;
  printarray(arr,5);
    reverseArray(arr,0,4);
    printarray(arr,5);
    
    return 0;
}