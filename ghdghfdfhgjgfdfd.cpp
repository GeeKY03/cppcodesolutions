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
		ll n,k;
		cin>>n>>k;
		if(n==2){
			ll num1=(1+k)*2;
			ll num2=(2+k);
			if(num1%4==0){
				cout<<"YES"<<endl;
				cout<<1<<" "<<2<<endl;
			}
			else if(num2%4==0){
				cout<<"YES"<<endl;
				cout<<2<<" "<<1<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			ll num1=(1+k)*2; // 1 2
			ll num2=(2+k);    // 2 1
			ll num3=(3+k)*4 ; // 3 4
			ll num4=(4+k)*3; // 4 3
			if((num1%4==0)&&(num3%4==0)){
				cout<<"YES"<<endl;
				for(int i=1;i<=n;i+=2){
					cout<<i<<" "<<i+1<<endl;
				}
			}
			else if((num2%4==0)&&(num4%4==0)){
				cout<<"YES"<<endl;
				for(int i=1;i<=n;i+=2){
					cout<<i+1<<" "<<i<<endl;
				}
			}
			else if((num1%4==0)&&(num4%4==0)){
				cout<<"YES"<<endl;
				int flag=0;
				if((n/2)&1){
					flag=1;
				}
				for(int i=1;i<=n;i+=4){
					cout<<i<<" "<<i+1<<endl;
					if((flag==1)&&(i==n-1)){
						break;
					}
					cout<<i+3<<" "<<i+2<<endl;
				}
			}
			else if((num2%4==0)&&(num3%4==0)){
				cout<<"YES"<<endl;
				int flag=0;
				if((n/2)&1){
					flag=1;
				}
				for(int i=1;i<=n;i+=4){
					cout<<i+1<<" "<<i<<endl;
					if((flag==1)&&(i==n-1)){
						break;
					}
					cout<<i+2<<" "<<i+3<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}