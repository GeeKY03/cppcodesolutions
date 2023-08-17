#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		int one=0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.push_back(num);
			if(num==1){
				one++;
			}
		}
		if(one==n){
			cout<<0<<endl;
		}
		else{
			int ind1=0;
		    for(int i=0;i<n;i++){
			    if(v[i+1]==0){
				ind1=i;
				    break;
			    }
			    else if(i==n-1){
				    ind1=i;
			    }
		    }
		    int ind2=0;
		    for(int i=n-1;i>=0;i--){
			    if(v[i-1]==0){
				    ind2=i;
				    break;
			    }
		    }
		    cout<<ind2-ind1<<endl;
		}
	}
	return 0;
}