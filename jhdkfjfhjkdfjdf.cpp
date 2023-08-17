#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'



int binexp(int a, long long b){
	int ans=1;
	while(b>0){
		if(b&1){
			ans=(ans*1LL*a);
		}
		a=(a*1LL*a);
		b >>=1;
	}
	return ans;
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll x1,y1,x2,y2,n;
		cin>>n>>x1>>y1>>x2>>y2;
		ll zx1= pow((n + abs(x1) + abs(x2)),2) + pow((y1 - y2),2);
		ll zx2= pow((n + abs(n-x1) + abs(n-x2)), 2) + pow((y1 - y2), 2);
		ll yx= (zx1<zx2)?zx1:zx2;
		ll zy1= pow((n + abs(y1) + abs(y2)), 2) + pow((x1 - x2), 2);
		ll zy2= pow((n + abs(n-y1) + abs(n-y2)), 2) + pow((x1 - x2), 2);
		ll yy= (zy1<zy2)?zy1:zy2;
		ll res= (yx<yy)?yx:yy;
		ld a=pow(res,0.5);
		cout<<fixed<<setprecision(9)<<a<<endl;

	}

	return 0;
}