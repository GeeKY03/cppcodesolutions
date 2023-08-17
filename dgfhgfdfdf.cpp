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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll n1=n/3;
		ll n2=n%3;
		if(n==1){
			cout<<2<<endl;
		}
		else if(n==2){
			cout<<1<<endl;
		}
		else if(n==3)cout
		if(n2==0){
			cout<<n1<<endl;
		}
		else if(n2==1){
			cout<<n1+2<<endl;
		}
		else{
			cout<<n1+1<<endl;
		}
		cout<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}