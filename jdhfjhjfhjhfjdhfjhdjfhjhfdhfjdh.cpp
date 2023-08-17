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
		for(int i=1;i<=n;i++){
			array[i-1]=i;
		}
		// for(int i=0;i<n;i++){
		// 	cout<<array[i]<<" ";
		// }
		// cout<<endl;
		int countper=0;
		for(int i=2;countper<=n-1;i++){
			int count=0;
			if((array[i-2]+array[i-1])==array[i]){
				count++;
			}
			if(count>0){
				next_permutation(array, array+n);
			}
			else{
				for(int j=0;j<n;j++){
					cout<<array[i]<<" ";
				}
				cout<<endl;
				countper++;
				next_permutation(array, array+n);
			}
		}
	}

	return 0;
}