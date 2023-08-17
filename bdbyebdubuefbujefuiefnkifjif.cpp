#include<bits/stdc++.h>
using namespace std;
#define ll long double
int main(){
	int t;
	cin>>t;
	while(t--){
		ll hc,dc,hm,dm,k,w,a;
		cin>>hc>>dc>>hm>>dm>>k>>w>>a;
		int count=0;
		if((hm<=dc)&&(k==0)){
			cout<<"YES"<<endl;
		}
		else if((hc<=dm)&&(k==0)){
			cout<<"NO"<<endl;
		}
		else{
		    for(ll i=0;i<=k;i++){
			    ll n1=((hc+(i*a))/dm);
			    ll n2=((hm/(dc+((k-i)*w))));
			    // cout<<n1<<endl;
			    if(n1>int(n1)){
			    	n1++;
			    }
			    // cout<<int(n1)<<endl;
			    // cout<<n2<<endl;
			    // if(n2>int(n2)){
			    // 	n2++;
			    // }
			    // cout<<int(n2)<<endl;
			    if(n1>n2){
				    count++;
				    cout<<"YES"<<endl;
				    break;
			    }
		    }
		    if(count==0){
			    cout<<"NO"<<endl;
		    }
		}
	}
	return 0;
} 