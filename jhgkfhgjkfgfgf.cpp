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
	ll n;
	cin>>n;
	vlli v;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	if(n==1){
		cout<<-1<<endl;
	}
	else if(n==2){
		int cdiff=v[1]-v[0];
		if(v[1]==v[0]){
			cout<<1<<endl;
			cout<<v[0]<<endl;
		}
		else if(cdiff&1){
			cout<<2<<endl;
			cout<<v[0]-cdiff<<" "<<v[1]+cdiff<<endl;
		}
		else{
			cout<<3<<endl;
		    int arr[3];
		    arr[0]=v[0]-cdiff;
		    arr[1]=v[1]+cdiff;
		    arr[2]=v[0]+(cdiff/2);
		    sort(arr, arr+3);
		    for(int i=0;i<3;i++){
			    cout<<arr[i]<<" ";
		    }

		}
	}
	else if(n==3){
		if((v[0]==v[1])&&(v[0]==v[2])){
			cout<<1<<endl;
			cout<<v[0]<<endl;
		}
		else if((v[1]-v[0])==(v[2]-v[1])){
			cout<<2<<endl;
			cout<<v[0]-(v[1]-v[0])<<" ";
			cout<<v[2]+(v[1]-v[0])<<" ";
		}
		else{
			int a=(v[1]-v[0]);
			int b=(v[2]-v[1]);
			if(a>b){
				if(a&1){
					cout<<0<<endl;
				}
				else{
					if((a/2)==b){
						cout<<1<<endl;
						cout<<v[0]+a/2;
					}
					else{
						cout<<0<<endl;
					}
				}
			}
			else{
				if(b&1){
					cout<<0<<endl;
				}
				else{
					if((b/2)==a){
						cout<<1<<endl;
						cout<<v[1]+b/2;
					}
					else{
						cout<<0<<endl;
					}
				}
			}
		}
	}
	else{
	    int cdif=0;
	    int a=0,b=0;
	    a=v[1]-v[0];
	    b=v[2]-v[1];
	    if((v[3]-v[2])==a){
		    cdif=a;
	    }
	    else{
		    cdif=b;
	    }
	    // cout<<cdif<<endl;
	    int rong=0;
	    int ind=0;
	    int zero=0;
	    ll count=1;
	    for(int i=1;i<n;i++){
	    	if(v[i]==v[i-1]){
	    		count++;
	    	}
	    	if(v[i]==v[i-1]){
	    		zero++;
	    	}
		    else if((v[i]-v[i-1])!=cdif){
			    rong++;
			    if(rong==1){
				    ind=i-1;
			    }
		    }
	    }
	    // cout<<cdif<<endl;
	    // for(auto x:v){
	    // 	cout<<x<<" ";
	    // }
	    // cout<<endl;
	    // cout<<rong<<endl;
	    // cout<<endl;
	    if(count==n){
	    	cout<<1<<endl;
	    	cout<<v[0]<<endl;
	    }
	    else if(zero>0){
	    	cout<<0<<endl;
	    }
	    else if(rong==1){
	    	if((v[ind+1]-v[ind])>(2*cdif)){
	    		cout<<0<<endl;
	    	}
	    	else if((v[ind+1]-v[ind])<(2*cdif)){
	    		cout<<0<<endl;
	    	}
	    	else{
	    		cout<<1<<endl;
	    		cout<<v[ind]+cdif<<endl;
	    	}
	    }
	    else if(rong>1){
		    cout<<0<<endl;
	    }
	    else if(rong==0){
		    cout<<2<<endl;
		    cout<<v[0]-cdif<<" "<<v[n-1]+cdif<<endl;
	    }
	    else{
		    cout<<1<<endl;
		    cout<<v[ind]+cdif<<endl;
	    }
	}


	return 0;
}