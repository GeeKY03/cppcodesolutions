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


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		vector<char> v;
		for(int i=0;i<size;i++){
			char bin;
			cin>>bin;
			v.pb(bin);
		}
		vi v2;
		int count=0;
		for(int i=0;i<size;i++){
			if(v[i]==48){
				v2.pb(i+1);
				count++;
				for(int j=i;j<size;j++){
					if(v[j]==48){
						v[j]=1;
					}
					else{
						v[j]=0;
					}
				}
			}
			else{
				continue;
			}
		}
		cout<<count<<endl;
		for(int i=0;i<v2.size();i++){
			cout<<v2[i]<<" "<<size<<endl;
		}
	}

	return 0;
}