
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,temp=0;
	    string s,r;
	    for(int i=0;i<n;i++){
	        if(s[i]==1||r[i]==1){
	            temp++;
	            cout<<temp;
	        }
	        
	    }
	    if(temp%2==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
