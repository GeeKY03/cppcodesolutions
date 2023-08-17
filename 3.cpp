#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
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
		long double c=0;
		cin>>n;
		ll a=0;
		ll b=0;
		int x1,y1,x2,y2;
		if((x2==n)&&(x1!=6)){
			a=(x1-(2*n));
			a=a*a;
			b=(y1-y2);
			b=b*b;
			c=sqrt(a+b);
			cout<<c<<endl;
		}
		else if((x2==n)&&(x1==6)){
			a=(x1-(n));
			a=a*a;
			b=(y1-y2);
			b=b*b;
			c=sqrt(a+b);
			cout<<c<<endl;
		}
		else if(((x2==0)&&(x1!=0))){
			a=(x1-(2*n));
			a=a*a;
			b=(y1-y2);
			b=b*b;
			c=sqrt(a+b);
			cout<<c<<endl;
		}
		else if(((x2==0)&&(x1==0))){
			a=(x1-(n));
			a=a*a;
			b=(y1-y2);
			b=b*b;
			c=sqrt(a+b);
			cout<<c<<endl;
		}
	}

	return 0;
}