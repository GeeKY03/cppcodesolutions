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
	int t;
	cin>>t;
	int ts=t;
	int count2=1;
	while(t--){
		int n;
		cin>>n;
		vi v;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.pb(num);
		}
		// for(auto x:v){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;
		// vector<pair<int,char>> v1;
		// for(int i=1;i>n-1;i++){
		// 	if((v[i]>v[i-1])&&(v[i]>v[i+1])){
		// 		pair<int,char> p={i,'h'};
		// 		v1.pb(p);
		// 	}
		// 	else if((v[i]<v[i-1])&&(v[i]<v[i+1])){
		// 		pair<int,char> p={i,'v'};
		// 		v1.pb(p);
		// 	}
		// }
		vector<pair<int,char>> v1;
		for(int i=1;i<n-1;i++){
			if((v[i]>v[i-1])&&(v[i]>v[i+1])){
				pair<int,char> p={i,'h'};
				v1.pb(p);
			}
			else if((v[i]<v[i-1])&&(v[i]<v[i+1])){
				pair<int,char> p={i,'v'};
				v1.pb(p);
			}
		}
		ll count=1;
		for(int i=1;i<n;i++){
			if(v[i]==v[i-1]){
				count++;
			}
		}
		int a_b=0;
		int trip=0;
		int doub=0;
		int sing=0;
		ll iv=v1.size();
		// for(int i=0;i<iv-2;i++){
		// 	if((abs(v1[i].first-v1[i+1].first)==1)&&(abs(v1[i+1].first-v1[i+2].first)==1)){
		// 		trip++;
		// 		break;
		// 	}
		// }
		for(int i=0;i<iv-2;i++){
			if((abs(v1[i].first-v1[i+1].first)==1)&&(abs(v1[i+1].first-v1[i+2].first)==1)){
				trip++;
				break;
			}
		}
		if((trip==0)&&(iv>=1)){
			for(int i=0;i<iv-1;i++){
				if(abs(v1[i].first-v1[i+1].first)==1){
					doub++;
				}
				else if(abs(v1[i].first-v1[i+1].first)==2){
					a_b++;
				}
			}
		}
		cout<<doub<<endl;
		if(trip>0){
			cout<<iv-3<<endl;
		}
		else if(doub>0){
			cout<<iv-1<<endl;
		}
		else if(a_b>0){
			cout<<iv-2<<endl;
		}
		else{
			if(iv>0){
				cout<<iv-1<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
	}
 
	return 0;
}