#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi v;
		int num=9;
		if(n>45){
			cout<<-1<<endl;
		}
		else if(n==45){
			cout<<123456789<<endl;
		}
		else{
		    while(n>=num){
			    n-=num;
			    v.pb(num);
			    num--;
		    }
		    if(n==0){
			    for(int i=v.size()-1;i>=0;i--){
				    cout<<v[i];
			    }
			    cout<<endl;
		    }
		    else{
			    v.pb(n);
			    for(int i=v.size()-1;i>=0;i--){
			        cout<<v[i];
		        }
		        cout<<endl;
		    }
		}
	}

	return 0;
}