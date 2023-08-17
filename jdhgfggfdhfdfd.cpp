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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vi v;
	int n;
	int x;
	cin>>n>>x;
	for(int i=0;i<=n;i++){
		v.pb(i);
	}
	int k=0;
	for(int b=n/2;b>=1;b/=2){
		cout<<"b:"<<b<<" "<<"k:"<<k<<endl;
		while(k+b<n&&(v[k+b]<=x)){
			k+=b;
			cout<<"In while "<<"b:"<<b<<" "<<"k:"<<k<<endl;
		}
	}
	v[k]==x?cout<<"YES"<<endl:cout<<"NO"<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}