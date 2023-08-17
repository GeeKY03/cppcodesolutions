#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

void pattern(int n){
	if(n==0){
		return;
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	pattern(n-1);
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	pattern(n);

	return 0;
}