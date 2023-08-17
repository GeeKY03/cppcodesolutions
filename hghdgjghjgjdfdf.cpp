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
		vi v(200000,0);
		ll n;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v[x]++;
		}
		ll ref=v[0];
		int count=1;
		ll ext=0;
		ll ctr=1;
		ll var=0;
		if(n==1){
			cout<<1<<endl;
		}
		else if(ref==0){
			cout<<1<<endl;
		}
		else if((ref==1)&&(v.size()>1)){
			cout<<2<<endl;
		}
		else if(v.size()==ref){
			cout<<1<<endl;
		}
		else{
			ref--;
			for(int i=1;i<n;i++){
				cout<<ctr<<endl;
				if(v[i]==0){
					break;
				}
				if(v[i]==1){
					ctr++;
					break;
				}
				if(v[i]<ref){
					ref=v[i]-1;
					ext++;
				}
				if(v[i]>ref){
					ext++;
				}
				if((v[i]>0)&&(ref>0)){
					ctr++;
					ref--;
				}
			}
			if(ext>0){
				ctr++;
			}
			else{
				for(int j=0;j<n;j++){
					if(v[j]!=v[j-1]-1){
						ctr++;
						break;
					}
				}
			}
			cout<<ctr<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}