#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

bool check(string s,int n,int len){
	if(s[n-1]==s[len-n]){
		return true;
	}
	else{
		return false;
	}
}

bool pal(string s){
	int len=s.length();
	int n=len;
	if(n==(len/2)){
		return true;
	}
	return (check(s,n,len)&& check(s,n-1,len));

}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	string s;
	cin>>s;
	cout<<pal(s)<<endl;

	return 0;
}