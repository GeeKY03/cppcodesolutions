#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
    cin>>n;
    ll a[n][4]={0};
    for(ll i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    ll pre[n][4]={0};
    ll suf[n][4]={0};
    pre[0][0]=a[0][0];
    pre[0][1]=a[0][1];
    pre[0][2]=a[0][2];
    pre[0][3]=a[0][3];
    suf[n-1][0]=a[n-1][0];
    suf[n-1][1]=a[n-1][1];
    suf[n-1][2]=a[n-1][2];
    suf[n-1][3]=a[n-1][3];
    for(ll i=1;i<n;i++){
        pre[i][0]=max(a[i][0],pre[i-1][0]);
        pre[i][1]=max(a[i][1],pre[i-1][1]);
        pre[i][2]=min(a[i][2],pre[i-1][2]);
        pre[i][3]=min(a[i][3],pre[i-1][3]);
    }
    for(ll i=n-2;i>=0;i--){
        suf[i][0]=max(a[i][0],suf[i+1][0]);
        suf[i][1]=max(a[i][1],suf[i+1][1]);
        suf[i][2]=min(a[i][2],suf[i+1][2]);
        suf[i][3]=min(a[i][3],suf[i+1][3]);
    }
    if(suf[1][0]<=suf[1][2] && suf[1][1]<=suf[1][3]){
        cout<<suf[1][0]<<" "<<suf[1][1]<<endl;
        return 0;
    }
    if(pre[n-2][0]<=pre[n-2][2] && pre[n-2][1]<=pre[n-2][3]){
        cout<<pre[n-2][0]<<" "<<pre[n-2][1]<<endl;
        return 0;
    }
    for(ll i=1;i<n-1;i++){
        ll aa=max(pre[i-1][0],suf[i+1][0]);
        ll b=max(pre[i-1][1],suf[i+1][1]);
        ll c=min(pre[i-1][2],suf[i+1][2]);
        ll d=min(pre[i-1][3],suf[i+1][3]);
        if(aa<=c && b<=d){
            cout<<aa<<" "<<b<<endl;
            return 0;
        }
    }




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}