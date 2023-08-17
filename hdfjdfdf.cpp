#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

ll binexp(ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = binexp(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n,a,b;
		cin>>n>>a>>b;
		ll num=min(a,b);
		string s1;
		ll x=num;
		if(x==0){
			s1.pb('0');
		}
		for(int i=0;x>0;i++){
			if(x&1){
				s1.pb('1');
			}
			else{
				s1.pb('0');
			}
			x=x/2;
		}
		reverse(s1.begin(),s1.end());
		cout<<s1<<endl;
		string s2;
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='0'){
				s2.pb('1');
			}
			else{
				s2.pb('0');
			}
		}
		cout<<s2<<endl;
		ll xnum=0;
		ll s2sz=s2.size();
		for(int i=0;i<s2sz;i++){
			if(s2[i]=='0'){
				continue;
			}
			else{
				xnum+=binexp(2,s2sz-i-1);
			}
		}
		cout<<xnum<<endl;
		ll max=binexp(2,n);
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}