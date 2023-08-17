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
	int n;
	string s;
	cin>>n>>s;
	vi v(n,0);
	for(int i=0;i<n-1;i++){
		if(s[i]=='L'){
			if(s[i+1]==0){
				s[i]+=2;
				s[i+1]+=1;
			}
			else if(s[i+1]>0){
				s[i]=s[i+1]+1;
			}
		}
		if(s[i]=='R'){
			if(s[i]==0){
				s[i]+=2;
			}
		}
	}


	return 0;
}