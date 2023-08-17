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
	int t ;
	cin >> t;
	while( t-- ){
		ll n , m ;
		cin>> n >> m ;
		ll sum=0;
		vi v(n,0);
		for(int i = 0 ; i < m ; i++ ){
			ll x;
			cin >> x ;
			sum++;
			v[x-1]++;
			// cout<<v[i]<<" ";
		}
		// cout<<endl;
		// for(auto  x : v){
		// 	cout<<x<< " ";
		// }
		// cout<<endl;

		vi vf(n,0);
		ll mx = 0;
		ll count = 0;
		ll total =0;
		ll nf=0;
		if(m%n == 0){
			mx = m/n;
		}
		else{
			mx=(m/n)+1;
		}
		for(int i = 0 ; i < n; i++ ){
			if(v[i]>mx){
				vf[i]=mx;
				sum-=mx;
				count=v[i]-mx;
				nf++;
			}
			else if(v[i]==mx){
				vf[i]=mx;
				sum-=mx;
				count=v[i]-mx;
			}
			else{
				ll dif=(mx-v[i])/2;
				vf[i]=v[i]+(dif*2);
				sum-=(v[i]+dif);
			}
		}
		for(auto x: vf){
			cout<<x<<" ";
		}
		ll maxe=*max_element(vf.begin(),vf.end());
		// cout<<maxe<<endl;
		// cout<<sum<<" "<<count<<endl;
		if((nf>sum)&&(nf>0)){
			total = maxe + (sum/nf) ;
		}
		else{
			total = maxe ;
		}
		cout << endl;
		cout<<"sum="<< sum << endl;
		cout<<"nf=" << nf <<endl;
		cout << "count=" << count << endl;
		// cout << total << endl;

	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}