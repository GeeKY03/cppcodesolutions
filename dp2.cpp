#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int exp(int n,int p){
	if(p==0){
		return 1;
	}
	int prevpow=exp(n,p-1);
	return n*prevpow;
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n,p;
	cin>>n>>p;
	cout<<exp(n,p);

	return 0;
}