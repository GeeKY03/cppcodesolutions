#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

const ll mode = 1e9+7;
const int N = 1000010;
 
int a[N],q[N];
 
bool check(int mid,int n,int Q){
    int le=0, great=0;
    for(int i=1;i<=n;i++){
        if( a[i] <= mid ){
        	le++;
        }
        else{
        	great++;
        }
    }
 
    for(int i=1;i<=Q;i++){
        if( q[i] > 0 ){
            if(q[i]>mid){
            	great++;
            }
            else{
            	le++;
            }
        }
        else{
            if(-q[i]>le){
            	great--;
            }
            else{
            	le--;
            }
        }
    }
    return le>0;
}
 
 
int main(){
	IOS

    int n,Q;
    cin>>n>>Q;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    for(int i=1;i<=Q;i++){
    	cin>>q[i];
    }
    int bottom = 1,top = n;
    while( bottom<=top){
        int mid = (bottom + top)/2;
        if(check( mid,n,Q )){
        	top = mid - 1;
        }
        else{
        	bottom = mid + 1;
        }
    }
    if(top+1>n){
    	cout<<0<<endl;
    }
    else{
    	cout<<top+1<<endl;
    }
    return 0;
}
