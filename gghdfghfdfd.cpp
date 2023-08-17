#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll one = 0, zero = 0;
		ll n=s.length();
		int zc=1;
		int fzi=-1;
		int foafzi=-1;
		int oc=1;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				one++;
				if((zc==0)&&(oc>0)){
					foafzi=i;
					oc--;
				}
			}
			else{
				zero++;
				if(zc>0){
					fzi=i;
					zc--;
				}
			}
		}
		if((zero==n)||(one==n)){
			cout<<s<<endl;
		}
		else if()
		
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}