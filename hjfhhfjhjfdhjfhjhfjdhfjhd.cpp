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
		vi vec;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			vec.pb(num);
		}
		// for(int i=0;i<n;i++){
		// 	cout<<vec[i]<<" ";
		// }
		// cout<<endl;
		vi shift;
		for(int i=n;i>=1;i--){
			int ind=0;
			for(int k=0;k<i;k++){
				if(vec[k]==i){
					ind=k;
					// shift.pb(k);
					if(ind+1==i){
						shift.pb(0);
					}
					else{
						shift.pb(ind+1);
					}
				}
			}
			if((ind+1)!=i){
				rotate(vec.begin(), vec.begin()+ind+1,vec.begin()+i);
				// cout<<"Done X "<<ind+1<<endl;
			}
			
		}
		for(int i=shift.size()-1;i>=0;i--){
			cout<<shift[i]<<" ";
		}
		cout<<endl;

	}

	return 0;
}