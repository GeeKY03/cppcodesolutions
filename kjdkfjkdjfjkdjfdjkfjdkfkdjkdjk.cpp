#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int array[n];
		for(int i=n;i>=1;i--){
			array[n-i]=i;
		}
		// for(int i=0;i<n;i++){
		// 	cout<<array[i]<<" ";
		// }
		// cout<<endl;
		for(int i=0;i<n;i++){
			if(i!=0){
				swap(array[n-i], array[n-i-1]);
			}
			for(int j=0;j<n;j++){
				cout<<array[j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}