#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
ll n, x , y;

bool good(int mid){
	if(mid<min(x,y)){
		return false;
	}
	mid-=min(x,y);
	return ((mid/x)+(mid/y)+1 >=n);
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin >> n >> x >> y;
	ll a=min(x,y);
	ll b=max(x,y);
	ll lo =0, hi=n*(a);
	while(lo+1<hi){
		ll mid=(lo+hi)/2;
		if(good(mid)){
			hi=mid;
		}
		else{
			lo=mid;
		}
	}
	cout<<hi<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}