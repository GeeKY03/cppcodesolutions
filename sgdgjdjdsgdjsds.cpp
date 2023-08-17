#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

ll w,h,n;

bool check(ll r){
	return (r/w)*(r/h)>=n;
}


int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin>>w>>h>>n;
	ll l=0;
	ll r=1;
	while(!check(r)){
		r*=2;
	}
	while(l+1<r){
		ll mid=(l+r)/2;
		if(check(mid)){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	cout<<r<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}