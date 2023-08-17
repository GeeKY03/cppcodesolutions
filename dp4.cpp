#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int fib(int a, int b, int n){
	int num=b+a;
	a=b;
	b=num;
	if(n==3){
		return num;
	}
	fib(a,b,n-1);
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	cout<<fib(0,1,n)<<endl;

	return 0;
}