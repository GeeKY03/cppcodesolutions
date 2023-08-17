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
		ll a,b,a1,b1,a2,b2;
		cin>>a>>b>>a1>>b1>>a2>>b2;
		ll arr1[]={a,b};
		ll arr2[]={a1,b1};
		ll arr3[]={a2,b2};
		sort(arr1, arr1+2);
		sort(arr2, arr2+2);
		sort(arr3, arr3+2);
		if((arr1[0]==arr2[0])&&(arr1[1]==arr2[1])){
			cout<<1<<endl;
		}
		else if((arr1[0]==arr3[0])&&(arr1[1]==arr3[1])){
			cout<<2<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}