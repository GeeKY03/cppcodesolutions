#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);



int main(){
	FastRead
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n;
		string s;
		cin>>n>>s;
		if(s[0]=='9'){
			string s1;
			ll x=0;
			for(int i=n-1;i>=0;i--){
				ll a=s[i]-48;
				a+=x;
				if(a>1){
					ll d=11-a;
					x=1;
					s1.pb('0'+d);
				}
				else{
					x=0;
					s1.pb(1-a+'0');
				}
			}
			reverse(s1.begin(),s1.end());
			cout<<s1<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				cout<<9-(s[i]-48);
			}
			cout<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}