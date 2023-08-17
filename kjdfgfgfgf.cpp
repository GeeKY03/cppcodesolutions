#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

long long binexp(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binexp(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
    IOS
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);


    // Your code goes here
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<0<<endl;
    }
    else{
        cout<<binexp(2,n/2)<<endl;
    }

    return 0;
}