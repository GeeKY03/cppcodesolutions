#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	int t;
	cin>>t;
	vector<ll> fact;
	vector<ll> exp;
	ll fac=1;
	for(int i=1;i<=15;i++){
		fac*=i;
		cout<<fac<<" ";
		fact.push_back(fac);
	}
	cout<<endl;
	ll num=1;
	for(int i=1;i<40;i++){
		num*=2;
		cout<<num<<" ";
		exp.push_back(num);
	}
	cout<<endl;
	while(t--){
		ll n;
		cin>>n;
		int count=0;
		for(int i=0;i<40;i++){
			if(i>15){
				if(n==exp[i]){
					count++;
				}
			}
			else if((n==fact[i])||(n==exp[i])){
				cout<<1<<endl;
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}