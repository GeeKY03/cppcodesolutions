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

	int n;
	cin>>n;
	pair<int,int> p[n];
	for(int i=0;i<n;i++){
		cin>>p[i].first>>p[i].second;
    }
    int lastdate=0;
    sort(p,p+n);
    for(int i=0;i<n;i++){
    	if(p[i].second>=lastdate){
    		lastdate=p[i].second;
    	}
    	else{
    		lastdate=p[i].first;
    	}
    }
    cout<<lastdate<<endl;

	return 0;
}