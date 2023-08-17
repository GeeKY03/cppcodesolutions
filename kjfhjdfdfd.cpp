#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

vi v;

ll fact(ll n){
	ll num=1;
	for(int i=1;i<=n;i++){
		num*=i;
	}
	return num;
}

ll d(ll n){
	if(n==0){
		return 1;
	}
	else{
	    long double dec=0;
	    for(int i=1;i<=n;i++){
	    	if(i%2!=0){
	    		dec+=(-1/fact(n));
	    	}
	    	else{
	    		dec+=(1/fact(n));
	    	}
	    	cout<<dec<<endl;
	    }
	    dec--;
	    dec=dec*fact(n);
	    return dec;
	}
}

ll ncr(ll n, ll r){
	ll num=fact(n)/(fact(r)*fact(n-r));
	return num;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vi derange={1,0,1,2,9};
	int n,k;
	cin>>n>>k;
	ll pos=0;
	for(int i=0;i<=k;i++){
		if(i==0){
			pos+=1*derange[i];
		}
		else if(i==1){
			pos+=n*derange[i];
		}
		else if(i==2){
			pos+=((n*(n-1))/2)*derange[i];
		}
		else if(i==3){
			ll a=((n*(n-1)*(n-2))/6);
			pos+=a*derange[i];
		}
		else if(i==4){
			ll a=(n*(n-1)*(n-2)*(n-3));
			a=a/12;
			pos+=a*derange[i];
		}
	}
	cout<<pos<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}