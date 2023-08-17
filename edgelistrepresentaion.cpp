#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#include<tuple>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	// vector<pair<int,int>> v;
	// v.pb({1,2});
	// v.pb({1,4});
	// v.pb({3,2});
	// v.pb({4,5});
	// v.pb({5,2});
	// for(int i=0;i<n;i++){
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// }

	// If edges have weights
	vector<tuple<int,int,int>> v;
	v.pb({1,2,7});
	v.pb({1,4,5});
	v.pb({3,2,3});
	v.pb({4,5,4});
	v.pb({5,2,8});
	for(int i=0;i<n;i++){
		cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}