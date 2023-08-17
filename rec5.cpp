#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int fib(int n){
	if((n==1)||(n==2)){
		return n-1;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	// fib(n);
	for(int i=1;i<=n;i++){
		cout<<fib(i)<<" ";
	}

	return 0;
}