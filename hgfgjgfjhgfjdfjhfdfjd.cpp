#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'

// int binomialCoeff(int n, int k){
//     int C[k+1];
//     memset(C,0,sizeof(C));
 
//     C[0]=1;
//     for (int i=1; i<=n; i++){
//         for (int j=min(i,k); j>0; j--){
//             C[j]=C[j]+C[j-1];
//         }
//     }
//     return C[k];
// }


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		ll x,y;
		x=(x2-x1);
		y=(y2-y1);
		ll num=x+y;
		ll fact=1;
		if(num==0){
			cout<<1<<endl; // 0!=1;
		}
		else if((x1>x2)&&(y1>y2)){
			cout<<0<<endl;
		}
		else{
			// ll path=binomialCoeff(num,x);
			// cout<<path<<endl;
			cout<<(x*y)+1<<endl;
		}
	}

	return 0;
}