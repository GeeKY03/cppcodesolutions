#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		int n,k;
		string s;
		cin>>n>>k;
		int count=1;
		int altc=0;
		int zc=0;
		for(int i=0;i<n;i++){
			char a;
			cin>>a;
			if((a=='0')&&(count==1)){
				continue;
			}
			else{
				s.pb(a);
			}
			if((a=='1')&&(count==1)){
				count--;
				altc++;
			}
			else{
				if(a=='1'){
					continue;
				}
				else{
					if(altc>0){
						zc++;
					}
					else{
						continue;
					}
				}
			}
		}
		n=s.size();
		if(zc>k){
			for(int i=0;i<n;i++){
				if((s[i]=='1')&&(k>0)){
					s[i]='0';
					k--;
				}
				if(k==0){
					break;
				}
			}
			// cout<<zc<<endl;
			ll coi=0;
			// for(int i=n-1;i>=0;i--){
			// 	if((s[i]=='0')&&(k>0)){
			// 		s[i]='1';
			// 		k--;
			// 	}
			// 	if(k==0){
			// 		break;
			// 	}
			// }
			// cout<<s<<endl;;
			for(int i=0;i<n;i++){
				if(s[i]=='1'){
					for(int j=i+1;j<n;j++){
						if(s[j]=='0'){
							coi++;
						}
					}
				}
			}
			cout<<coi<<endl;
		}
		else{
			ll coi=0;
			for(int i=n-1;i>=0;i--){
				if((s[i]=='0')&&(zc>0)){
					s[i]='1';
					zc--;
				}
				if(zc==0){
					break;
				}
			}
			for(int i=0;i<n;i++){
				if(s[i]=='1'){
					for(int j=i+1;j<n;j++){
						if(s[j]=='0'){
							coi++;
						}
					}
				}
			}
			cout<<coi<<endl;
		}
	}

	return 0;
}