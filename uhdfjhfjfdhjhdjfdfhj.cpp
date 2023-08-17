 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);m   
	// freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int size;
		string s;
		cin>>size;
		cin>>s;
		map<int, int> m;
		int count=0;
		for(int i=0;i<size;i++){
			if(s[i]=='0'){
				m[i+1]=size-i;
				count++;
				for(int j=i;j<size;j++){
					if(s[j]=='0'){
						s[j]='1';
					}
					else{
						s[j]='0';
					}
				}
			}
		}
		cout<<count<<endl;
		for(auto x:m){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}


	return 0;
}
