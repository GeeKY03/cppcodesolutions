#include <bits/stdc++.h>
using namespace std;



typedef long long ll;



int main()
{
ios::sync_with_stdio(0);
cin.tie(0);



ll t;
cin>>t;



while(t--)
{
ll n;
cin>>n;
ll x,y;
ll arr[n];
cin>>x>>y;



for(ll i=0;i<n;i++)
cin>>arr[i];





if(__gcd(x,y)==1)
cout<<"YES"<<endl;
else
{
ll GCD=__gcd(x,y);



int flag=1;



sort(arr,arr+n);



for(ll i=1;i<n;i++)
{
if((arr[i]-arr[i-1])%GCD!=0)
{
flag=0;
break;
}



if(flag==0)
break;
}



if(flag==0)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}





}
}