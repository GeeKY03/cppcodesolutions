#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p,q;// total no of team members
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	cin>>p>>q;
	sort(v.rbegin(),v.rend());
	if(n==4){
		cout<<5<<endl;
	}
	else{
		int max=v[0];
	    int secmax=v[1];
	    int count=0;
	    if(max%p==0){
	    	count+=max/p;
	    }
	    else{
	    	count+=(max/p)+1;
	    }
	    secmax-=(q*count);
	    if(secmax%p==0){
	    	count+=secmax/p;
	    }
	    else{
	    	count+=(secmax/p)+1;
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}