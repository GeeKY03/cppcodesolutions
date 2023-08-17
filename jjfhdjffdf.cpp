#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

long long binexp(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
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
		string s;
		cin>>s;
		int len =s.length();
		set<int> sett;
		for(int i=0;i<len;i++){
			string s1;
			for(int j=0;j<len;j++){
				if(j==i){
					continue;
				}
				else{
					s1.pb(s[j]);
				}
			}
			// cout<<s1<<endl;
			ll num=stoi(s1);
			sett.insert(num);
			// ll num=0;
			// for(int l=len-1;l>=0;l--){
			// 	int mul=binexp(10,len-1-l);
			// 	num+=mul*(s[l]-48);
			// 	// cout<<mul<<endl;
			// }
			// cout<<num<<endl;
			// sett.insert(num);
		}
		for(auto x:sett){
			cout<<x<<endl;
			break;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}