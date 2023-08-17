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
	int n;
	cin>>n;
	string s;
	int g=0;
	int b=0;
	for(int i=0;i<n;i++){
		char a;
		cin>>a;
		if((a=='G')){
			g++;
			s.pb(a);
		}
		else{
			b++;
			s.pb(a);
		}
	}
	int count=0;
	if(g>=b){
		for(int i=0;i<n;i++){
			if(s[i]=='B'){
				for(int j=n-1;j>=i+1;j--){
					if(s[j]=='G'){
						swap(s[j],s[i]);
						// cout<<s<<endl;
						count++;
						break;
					}
				}
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(s[i]=='G'){
				for(int j=n-1;j>=i+1;j--){
					if(s[j]=='B'){
						swap(s[j],s[i]);
						count++;
						break;
					}
				}
			}
		}
	}
	cout<<count<<endl;
	// cout<<g<<" "<<b<<endl;

	return 0;
}