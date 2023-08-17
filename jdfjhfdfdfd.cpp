#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int a;
	string b;
	cin>>a;
	cin>>b;
	int n=b.size();
	ll num=0;

	// cout<<n<<endl;
	int tens=pow(10,n-1);
	for(int i=n-1;i>=0;i--){
		num+=(b[i]-48)*tens;
		tens/=10;
	}
	cout<<num+a<<endl;
	return 0;
}