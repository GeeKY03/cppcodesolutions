#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


int binexp(int a, int b, int m){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b >>=1;
    }
    return ans;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    // Your code goes here
    ll n,k,m;
    cin>>n>>k>>m;
    ll sum=0;
        if(n&1){
            for(int i=1;i<=(n/2);i++){
                ll x= binexp(i,k,m);
                sum+=x;
                sum=sum%m;
                ll y=binexp((n+1)-i,k,m);
                sum+=y;
                sum=sum%m;
            }
            cout<<sum+binexp((n+1)/2,k,m)<<endl;
        }
        else{
            for(int i=1;i<=(n/2);i++){
                ll x= binexp(i,k,m);
                sum+=x;
                sum=sum%m;
                ll y=binexp(n-i+1,k,m);
                sum+=y;
                sum=sum%m;
            }
            cout<<sum<<endl;
        }

    return 0;
}