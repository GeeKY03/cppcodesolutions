#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define N 500010
ll read(){
	char cc;
	while(1){cc=getchar();if((cc>='0'&&cc<='9')||cc=='-')break;}
	ll sum=0,flag=1;
	cc=='-'?flag=-1:sum=(cc^48);
	while(1){cc=getchar();if(!(cc>='0'&&cc<='9'))break;sum=(sum<<1)+(sum<<3)+(cc^48);}
	return sum*flag;
}
void write(ll x){
	if(!x)putchar('0');
	if(x<0){x=-x;putchar('-');}
	ll cc[15],cntt=0;
	while(x){cc[++cntt]=x%10;x/=10;}
	for(ll i=cntt;i>=1;i--)putchar(cc[i]+'0');
	putchar('\n');
}



double esp=0.0000000001;
ll t,n,a[N],ans;
ll check(ll x,ll y){
	double d=(double)(a[y]-a[x])/(double)(y-x);
	ll sum=0;
	for(ll i=1;i<=n;i++){
		double yy=(double)(i-x)*d+(double)a[x];
		if(!(-esp<=yy-a[i]&&yy-a[i]<=esp))sum++;
	}
	return sum;
}
int main(){
	t=read();
	while(t--){
		n=read();for(ll i=1;i<=n;i++)cin>>a[i];
		if(n<=2){
			cout<<0<<endl;
			continue;
		}
		ans=1e13;
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				ans=min(ans,check(i,j));
			}
		}
		cout<<ans<<endl;
		
		
		
		
		
	}
	
	return 0;
}
