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
		int n;
		cin>>n;
		int v[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		ll count=0;
        for(int i=0;i<n;i++){
        	set<int> s;
        	for(int j=i;j<n;j++){
        		s.insert(v[j]);
        		int b=j-i+1;
        		if(s.find(b)!=s.end()){
        			count++;
        		}
        	}
        }
        cout<<count<<endl;
	}


	return 0;
}