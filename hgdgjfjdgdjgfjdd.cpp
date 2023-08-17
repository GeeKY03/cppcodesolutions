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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.pb(s);
	}
	string s2="123";
	ll count=0;
	for(int i=0;i<n;i++){
		string s1=v[i];
		if(s1.find(s2)!=string::npos){
		count++;
	}
	}
	// ll count=0;
	cout<<count<<endl;

	return 0;
}