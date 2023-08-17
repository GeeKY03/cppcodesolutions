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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll q;
	cin>>q;
	while(q--){
		ll n,m,k;
		cin>>n>>m>>k;
		ll diag=0;
		ll mn=min(n,m);
		ll mx=max(n,m);
		if(mx>k){
			cout<<-1<<endl;
		}
		else if(n==m){
			diag+=mn-1;
			ll dif=1;
			ll ml=k-mn+1;
			if((dif&1)&&(ml&1)){
				diag+=ml;
			}
			// else if((!dif&1)&&(!ml&1)){
			// 	diag+=ml;
			// }
			// else if((!dif&1)&&(ml&1)){
			// 	ml-=2;
			// 	diag+=ml;
			// }
			else if((dif&1)&&(ml%2==0)){
				ml-=2;
				diag+=ml;
			}
			cout<<diag<<endl;
		}
		else{
			diag+=mn;
			ll dif=mx-mn;
			ll ml=k-mn;
			//Case 1 odd odd
			if((dif&1)&&(ml&1)){
				ml--;
				diag+=ml;
			}
			else if((dif%2==0)&&(ml%2==0)){
				diag+=ml;
			}
			else if((ml%2==0)&&(dif&1)){
				diag+=(ml-1);
			}
			else if((dif%2==0)&&(ml&1)){
				ml-=2;
				diag+=ml;
			}
			cout<<diag<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}