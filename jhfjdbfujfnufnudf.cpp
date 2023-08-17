#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		ll hc,dc,hm,dm,k,w,a;
		cin>>hc>>dc>>hm>>dm>>k>>w>>a;
		int count=0;
		if(k==0){
			if(dc>=hm){
				cout<<"YES"<<endl;
			}
			else if((hc<=dm)){
				cout<<"NO"<<endl;
			}
			else{
			    ll left=(hc/dm);
			    left++;
			    ll right=hm/dc;
			    if(left>=right){
			    	cout<<"YES"<<endl;
			    }
			    else{
			    	cout<<"NO"<<endl;
			    }
			}
		}
		else if(k==1){
			ll left1=((hc+(a))/dm);
			left1++;
			ll left2=hc/dm;
			left2++;
			ll right2=hm/(dc+w);
			ll right1=hm/dc;
			if((left1>right1)||(left2>right2)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(k>1){
			for(ll i=0;i<=k;i++){
			    ll left=((hc+(i*a))/dm);
			    ll right=(hm/((dc+((k-i)*w))));
			    if(left>=right){
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