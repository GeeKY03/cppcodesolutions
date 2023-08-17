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
		int x=n;
		int array[n];
		for(int i=0;i<n;i++){
			array[i]=i+1;
		}

		int countper=0;

		while(countper<=n-1){
			int count=0;
			for(int i=2;i<n;i++){
				if(array[i-2]+array[i-1]==array[i]){
					count++;
				}
			}
			if(count>0){
				next_permutation(array, array+n);
			}
			else{
				for(int j=0;j<n;j++){
					cout<<array[j]<<" ";
				}
				cout<<endl;
				countper++;
				next_permutation(array, array+n);
			}
		}
	}

	return 0;
}