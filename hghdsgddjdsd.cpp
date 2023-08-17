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
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	set<char> sett;
	for(int i=0;i<k;i++){
		char a;
		cin>>a;
		sett.insert(a);
	}
	ll subs=0;
	ll count=0;
	for(int i=0;i<n;i++){
		if(sett.find(s[i])!=sett.end()){
			count++;
			if(i==n-1){
				subs+=((count)*(count+1)/2);
			}
		}
		else{
			subs+=((count)*(count+1)/2);
			count=0;
		}
	}
	cout<<subs<<endl;
	return 0;
}