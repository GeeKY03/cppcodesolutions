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
		ll n;
		cin>>n;
		ll y=sqrt(n)*10;
		// cout<<y<<endl;
		ll num=y;
		// cout<<num<<endl;
		int flag=0;
		while(num>0){
			for(int i=1;i<=y;i++){
				ll x=(2*num)+(2*i)+(num*i);
				if(x==n){
					flag=1;
					// cout<<num<<" "<<i<<" ";
					break;
				}
				else if(x>n){
					break;
				}
			}
			if(flag==1){
				break;
			}
			num--;
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}