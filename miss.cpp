#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	int arr[n-1];
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	if(n-1==1){
		if(arr[0]!=n){
			cout<<n<<endl;
		}
		else{
			cout<<n-1<<endl;
		}
	}
	else{
		int num=0;
		sort(arr,arr+n-1);
	    for(int i=0;i<n-1;i++){
		    if(arr[i]!=i+1){
			    num=i+1;
			    break;
		    }
	    }
	    if(num==0){
	    	cout<<n<<endl;
	    }
	    else{
	    	cout<<num<<endl;
	    }
	}

	return 0;
}