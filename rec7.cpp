#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int fact(int n){
	if(n==0){
		return 1;
	}
	int prevnum=fact(n-1);
	return n*prevnum;
}

int ncr(int n, int r){
	ll num=fact(n)/(fact(r)*fact(n-r));
	return num;
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n,r;
	cin>>n>>r;
	cout<<ncr(n,r)<<endl;

	return 0;
}