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
	ll n;
	cin>>n;
	set<int> even;
	set<int> odd;
	for(int i=1;i<=n;i++){
		if(i&1){
			odd.insert(i);
		}
		else{
			even.insert(i);
		}
	}
	ll y=odd.size();
	ll z=even.size();
	cout<<(2*z)+y<<endl;
	for(auto x:even){
		cout<<x<<" ";
	}
	for(auto x:odd){
		cout<<x<<" ";
	}
	for(auto x:even){
		cout<<x<<" ";
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}