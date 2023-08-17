#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

long long eat(ll i,ll n){
    ll m=n,vasya=0;
    while(m>0){
            if(m<=i || m<10){
                vasya+=m;
                break;
            }
            else{
                m-=i;
                vasya+=i;
                m-=(m/10);
            }
        }
    return vasya;
}


int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
    cin>>n;
    ll st=1,fi=n,mid;
    ll vasya=0;
    while(st<fi){
        mid=(st+fi)/2;
        if(eat(mid,n)>=(n+1)/2)
            fi=mid;
        else
            st=mid+1;
    }
    cout<<st<<endl;


	return 0;
}