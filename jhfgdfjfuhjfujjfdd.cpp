#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);


int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n ;
	    cin>>n;
	    ll num=n;
	    if(n&1){
		    cout<<1<<endl;
	    }
	    else if(n==1){
		    cout<<0<<endl;
	    }
	    else if(n==0){
	    	cout<<-1<<endl;
	    }
	    else{
		    ll odd=0;
		    ll even=0;
		    vlli oddnum;
		    while(n%2==0){
			    even++;
			    n=n/2;
		    }
		    for(ll i=3;i<=sqrt(n);i=i+2){
			    while(n%i==0){
				    if(i&1){
				    	continue;
				    }
				    else{
					    even++;
				    }
				    n=n/i;
			    }
		    }
		    if(n>2){
			    if(n&1){
			    	continue;
			    }
			    else{
				    even++;
			    }
		    }
		    if(even&1){
			    cout<<-1<<endl; 
		    }
		    else{
		    	ll steps=0;
		    	while(num>1){
		    		ll sqt=sqrt(num);
		    		if(num&1){
		    			cout<<steps+1<<endl;
		    			break;
		    		}
		    		else if(num%sqt==0){
		    			steps++;
		    			num=num/sqt;
		    		}
		    		else{
		    			cout<<-1<<endl;
		    			break;
		    		}
		    	}
			   //  sort(oddnum.begin(),oddnum.end());
			   //  ll steps=0;
			   //  ll count=1;
			   //  ll s=oddnum.size();
			   //  for(ll i=1;i<s;i++){
				  //   if(oddnum[i]!=oddnum[i-1]){
					 //    if(count&1){
						//     steps++;
						//     count=1;
					 //    }
					 //    else{
						//     steps++;
						//     steps++;
						//     count=1;
					 //    }
				  //   }
				  //   else{
					 //    count++;
					 //    if(i==s-1){
					 //    	if(count&1){
					 //    		steps++;
					 //    	}
					 //    	else{
					 //    		steps+=2;
					 //    	}
					 //    }
					 //    else{
					 //    	continue;
					 //    }
				  //   }
			   //  }
			   //  if(s==1){
			   //  	cout<<steps+2<<endl;
			   //  }
			   //  else{
			   //  	cout<<steps+1<<endl;
			   //  }
		    }
	    }
	}
	return 0;
}

