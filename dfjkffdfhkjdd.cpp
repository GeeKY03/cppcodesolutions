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
		ll n,m;
        cin>>n>>m;
        vector<string> v(n),v1(n-1);
        for(int i=0; i<n; i++)
            cin>>v[i];
        for(int i=0; i<n-1; i++)
            cin>>v1[i];
        vector<int> arr(m);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                arr[j] += v[i][j];
 
        for(int i=0; i<n-1; i++)
            for(int j=0; j<m; j++)
                arr[j] -= v1[i][j];
 
        for(auto x : arr)
            cout<<char(x);
        cout<<endl;
	}
	return 0;
}