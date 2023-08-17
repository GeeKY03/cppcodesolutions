#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
map<string,int> data;
vector<string> v[80000];

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		set<string> sett;
		for(int j=1;j<10;j++){
			string str;
			for(int k=0;k<9;k++){
				for(int l=k;l<k+j;l++){
					str.pb(s[l]);
				}
				if(sett.count(str)==0){
					data[str]++;
					v[i].pb(str);
					sett.insert(str);
				}
			}
		}
	}
	for(int i=0;i<n;i++){
        int kk=(v[i].size());
        for(int j=0;j<kk;j++){
            if(data[v[i][j]]==1){
                cout<<v[i][j]<<"\n";
                break;
            }
        }
    }

	return 0;
}