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
	string s;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='r'){
			cout<<i+1<<endl;
		}
	}
	for(int i=len-1;i>=0;i--){
		if(s[i]=='l'){
			cout<<i+1<<endl;
		}
	}
	return 0;
}