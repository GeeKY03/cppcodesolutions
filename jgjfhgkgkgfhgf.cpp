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
	int t;
	cin>>t;
	while(t--){
		string s,r;
		cin>>s;
		cin>>r;
		for(int i=0;i<s.length();i+=4){
			if((s[i]==r[0])&&(s[i+1]==r[1])&&(s[i+2]==r[2])&&(s[i+3]==r[3])){
				cout<<(i+4)/4<<endl;
			}
		}
	}

	return 0;
}