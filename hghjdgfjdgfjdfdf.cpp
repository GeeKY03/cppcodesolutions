#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
vlli v={0};

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n,k;
	cin>>n>>k;
	set<ll> sett;
	int flag=0;
	// long double num=sqrt(num);
	// ll x=0;
	// if(int(num)>num){
	// 	x=num+1;
	// }
	// else{
	// 	x=num;
	// }
	// int flag=0;
	// if(x>k){
	// 	for(int i=1;i<=k;i++){
	// 		ll rem=n%i;
	// 		if(v[rem]>0){
	// 			flag=1;
	// 			break;
	// 		}
	// 		else{
	// 			v[rem]++;
	// 		}
	// 	}
	// }
	if(k>=43){
	    for(int i=1;i<=43;i++){
	    	ll num=n%i;
	    	if(sett.find(num)!=sett.end()){
	    		flag=1;
	    		// cout<<num<<endl;
	    	}
	    	else{
	    		sett.insert(num);
	    	}
	    }
	}
	else{
		for(int i=1;i<=k;i++){
			ll num=n%i;
	    	if(sett.find(num)!=sett.end()){
	    		flag=1;
	    		// cout<<num<<endl;
	    	}
	    	else{
	    		sett.insert(num);
	    	}
		}
	}
	// else{
	// 	for(int i=1;i<=x;i++){
	// 		ll rem=n%i;
	// 		if(v[rem]>0){
	// 			flag=1;
	// 			cout<<rem<<endl;
	// 			break;
	// 		}
	// 		else{
	// 			v[rem]++;
	// 		}
	// 	}
	// }

	
	// for(auto x:sett){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	if(flag==1){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}