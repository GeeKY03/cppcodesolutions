#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int array1[n];
		int array2[n];
		for(int i=0;i<n;i++){
			cin>>array1[i];
		}
		for(int i=0;i<n;i++){
			cin>>array2[i];
		}
		for(int i=0;i<n;i++){
		    for(int i=0;i<n;i++){
			    if(array1[i]<=k){
				    k=k+array2[i];
				    array1[i]=0;
				    array2[i]=0;
			    }
		    }
	    }
		cout<<k<<endl;
	}
	return 0;
}