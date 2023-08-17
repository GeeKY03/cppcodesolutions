#include<bits/stdc++.h>
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
using namespace __gnu_pbds;
 
template<typename T>
using ordered_multiset_1 = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
template<typename T>
using ordered_multiset_2 = tree<T ,null_type,std::greater_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
 
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
 
int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
 
 
	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll inv=0;
		ordered_multiset_1<int> oms1;
		ordered_multiset_2<int> oms2;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			oms1.insert(x);
			oms2.insert(x);
			inv+=min(oms1.order_of_key(x),oms2.order_of_key(x));
		}
		cout<<inv<<endl;
	}
 
 
 
 
	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}