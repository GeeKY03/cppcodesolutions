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



    int k;
    int n;
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    int num=(arr[n-1]-arr[0])/2;
    for(int i=0;i<n;i++){
        if(arr[i]>=(k+1)/2){
            arr[i]-=k;
        }
        else{
            arr[i]+=k;
        }
    }

    sort(arr, arr+n);
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}