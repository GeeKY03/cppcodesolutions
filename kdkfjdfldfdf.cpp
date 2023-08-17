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
		int n;
		cin>>n;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			v.pb(make_pair(a,b));
		}
		ll count=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					int x1=v[i].first;
					int y1=v[i].second;
					int x2=v[j].first;
					int y2=v[j].second;
					int x3=v[k].first;
					int y3=v[k].second;
					int m1=0,m2=0,m3=0;
					if(x2==x1){
						m1=100000;
					}
					else{
						m1=(y2-y1)/(x2-x1);
					}
					if(x3==x2){
						m2=100000;
					}
					else{
						m2=(y3-y2)/(x3-x2);
					}
					if(x3==x1){
						m3=100000;
					}
					else{
						m3=(y3-y1)/(x3-x1);
					}
					if((m1!=m2)&&(m2!=m3)&&(m3!=m1)){
						ll eq1=(((x3-x1)*(x3-x2))+((y3-y1)*(y3-y2)));
						if(eq1==0){
							count++;
						}
						else{
							ll eq2=(((x2-x3)*(x2-x1))+((y2-y3)*(y2-y1)));
							if(eq2==0){
								count++;
							}
							else{
								ll eq3=(((x1-x2)*(x1-x3))+((y1-y2)*(y1-y3)));
								if(eq3==0){
									count++;
								}
								else{
									continue;
								}
							}
						}
					}
					else{
						continue;
					}
				}
			}
		}
		cout<<count<<endl;
	}


	return 0;
}