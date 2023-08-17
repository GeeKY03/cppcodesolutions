#include<bits/stdc++.h>
using namespace std;
#define pb push_back

// int binexprecur()

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
		sort(v.begin(),v.end());
		// case 1
		if(v.size()==1){
			cout<<num<<endl;
		}
		// case2
		else if(odd.size()==0){
			// check if elements are distinct 
			int count=1;
			for(int i=1;i<v.size();i++){
				if(v[i]!=v[i-1]){
					count++;
				}
			}
			// When elements are distinct
			int max=0;
			if(count>=1){
				for(int i=0;i<v.size()-1;i++){
					max=v[n-1];
					int x=v[i];
					for(int j=0;x>=1;j++){
						max=max*2;
						x=x/2;
					}
					v[i]=x;
				}
				v[n-1]=max;
				cout<<accumulate(v.begin(),v.end(),0)<<endl;
			}
			else if(count==1){
				cout<<"HEHE"<<endl;
			}
		}
	}
	return 0;
}