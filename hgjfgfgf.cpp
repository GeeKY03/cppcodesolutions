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
	string s;cin>>s;
	int ind=5;
	reverse(s.begin(),s.begin()+5);
	for(int i=1;i<s.size()-ind+1;i++){
		cout<<s<<endl;
		reverse(s.begin()+i,s.begin()+ind+i);
	}
	cout<<s<<endl;

	return 0;
}