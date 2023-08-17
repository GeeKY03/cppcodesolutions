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
	ll t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		for(int i=l;i<=r-2;i++){
			for(int j=i+1;j<=r-1;j++){
				for(int k=j+1;k<=r;k++){
					// cout<<i<<" "<<j<<" "<<k<<endl;
					ll num=(__gcd(__gcd(i,j),k));
					ll num1=i*j*k;
					ll num2=num1/num;
					if(num2>=(i+j+k)){
						cout<<i<<" "<<j<<" "<<k<<endl;
					}
				}
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}