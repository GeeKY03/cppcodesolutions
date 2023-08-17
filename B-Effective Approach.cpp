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
	int ele;
	cin>>ele;
	vi v;
	for(int i=0;i<ele;i++){
		int n;
		cin>>n;
		v.pb(n);
	}
	int q;
	cin>>q;
	int vas=0, pet=0;
	for(int i=0;i<q;i++){
		int num;
		cin>>num;
		for(int i=0;i<ele;i++){
			if(v[i]==num){
				vas+=i+1;
				pet+=ele-i;
				break;
			}
			else if(v[ele-i-1]==num){
				vas+=ele-i;
				pet+=ele-i;
				break;
			}
		}
	}
	cout<<vas<<" "<<pet<<endl;

	return 0;
}