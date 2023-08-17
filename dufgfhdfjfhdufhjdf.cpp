#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int l;
	cin>>l;
	int n=0;
	int t=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='N'){
			n++;
		}
		else{
			t++;
		}
	}
	if(n>t){
		cout<<"Nutan"<<endl;
	}
	else{
		cout<<"Tusla"<<endl;
	}

	return 0;
}