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


	string s;
	string t;
	cin>>s;
	cin>>t;
	vi max;
	int lens=s.length();
	int lent=t.length();
	if(lens==lent){
		cout<<0<<endl;
	}
	else{
		for(int i=0;i<lens;i++){
			if(s[i]==t[0]){
				int count=0;
				int countj=0;
				for(int j=0;j<lens;j++){
					if(s[i+countj]==t[countj]){
						count++;
						countj++;
					}
				}
				if(count==lent){
					max.pb(i);
				}
			}
		}
		for(int i=lens-1;i>=0;i--){
			if(s[i]==t[lent-1]){
				int count=0;
				for(int j=lent-1;j>=0;j--){
					if(s[i-(lent-1-j)]==t[j]){
						count++;
					}
				}
				if(count==lent){
					max.pb(lens-i-1);
				}
			}
		}
		if(max.size()>0){
		    sort(max.begin(), max.end());
		    cout<<max[(max.size()-1)];
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}