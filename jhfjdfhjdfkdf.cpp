#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int minus1=0;
		int plus1=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a==-1){
				minus1++;
			}
			else{
				plus1++;
			}
		}
		if(n&1){
			int x=n/2;
			int y=n-(n/2);
			if((plus1==x)&&(minus1==y)){
				cout<<"YES"<<endl;
			}
			else if((plus1==y)&&(minus1==x)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			if(n%4==0){
				if((plus1==(n/2))&&(minus1==n/2)){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				int x=(n/2)-1;
				int y=n-x;
				if((plus1==x)&&(minus1==y)){
					cout<<"YES"<<endl;
				}
				else if((plus1==y)&&(minus1==x)){
					cout<<"YES"<<endl;
				}
				else if((plus1==(n/2))&&(minus1==(n/2))){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}
	}

	return 0;
}