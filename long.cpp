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
	int n=s.length();
	int count=1;
	int best=0;
	for(int i=0;i<n;i++){
		if(s[i]!=s[i-1]){
			best=max(best,count);
			count=1;
		}
		else{
			count++;
		}
	}
	best=max(best,count);
	cout<<best<<endl;

	return 0;
}