#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		vector<int> odd;
		vector<int> even;
		int num;
		for(int i=0;i<n;i++){
			cin>>num;
			v.pb(num);
			if(num%2==0){
				even.pb(num);
			}
			else{
				odd.pb(num);
			}
		}
		sort(v.begin(), v.end());
		if(v.size()==1){
			cout<<num<<endl;
		}
		else{
			if(v[n-1]%2!=0){
				for(int i=0;i<n;i++)
			}
		}
	}
	return 0;
}