#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll hc, dc, hm, dm, k, w, a;
		cin>>hc>>dc>>hm>>dm>>k>>w>>a;
		int count=0;
		for(int i=0;i<=k;i++){
			ll hc1=hc+(k-i)*a;
			ll dc1=dc+i*w;
			ll  mhfd;
			ll  chfd;
			if(hm%dc1==0){
				mhfd=hm/dc1;
			}
			else{
				mhfd=(hm/dc1)+1;
			}
			if(hc1%dm==0){
				chfd=hc1/dm;
			}
			else{
				chfd=(hc1/dm)+1;
			}
			if(chfd>=mhfd){
				count++;
				break;
			}
		}
		if(count>0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}