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
		string s;
		int n;
		cin>>s,n;
		int shr=(s[0]*10)+(s[1]);
		int smin=(s[3]*10)+(s[4]);
		if(s[6]=='P'){
			shr+=12;
		}
		for(int i=0;i<n;i++){
			int flag=0;
			string st,en;
			cin>>st>>en;
			int sthr=(st[0]*10)+st[1];
			int stmin=(st[3]*10)+st[4];
			if(st[6]=='P'){
				sthr+=12;
			}
			int enhr=(en[0]*10)+en[1];
			int enmin=(en[3]*10)+en[4];
			if(en[6]=='P'){
				enhr+=12;
			}
			if((st[6]=='P')&&(en[6]=='P')){
				if((shr>=sthr)&&(shr<=enhr)&&(smin>=stmin)&&(smin<=enmin)){
					flag=1;
				}
			}
			else if((st[6]=='A')&&(en[6]=='P')){
				if((shr>=sthr)&&(shr<=enhr)&&(smin>=stmin)&&(smin<=enmin)){
					flag=1;
				}
			}
			else if((st[6]=='A')&&(en[6]=='A')){
				if((shr>=sthr)&&(shr<=enhr)&&(smin>=stmin)&&(smin<=enmin)){
					flag=1;
				}
			}
			else{
				if(((shr>=sthr)&&(shr<=24)&&(smin>=stmin))||((shr<=enhr)))
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}