#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	int x=sqrt(n);
	vi v;
	for(int i=1;i<=x;i++){
		if(n%i==0){
			int a=n/i;
			int b=n/a;
			if(b==a){
				v.pb(a);
			}
			else{
				v.pb(a);
				v.pb(b);
			}
		}
	}
	int odd=0;
	int even=0;
	for(int i=0;i<v.size();i++){
		if(v[i]&1){
			odd++;
		}
		else{
			even++;
		}
	}
	if(odd==even){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}