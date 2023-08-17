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
	ll n,x,y;
	cin>>n>>x>>y;
	ll a,b;
	if(x>y){
		a=y;
		b=x;
	}
	else{
		a=x;
		b=y;
	}
	ll time=a;
	for(int i=0;i>=0;i++){
		ll w=b*i;
		ll e=a*(n-i);
		if(w>=e){
			time+=e;
			break;
		}
	}
	cout<<time<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}