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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vi v1;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v1.pb(x);
		}
		sort(v1.begin(),v1.end());
		ll mx=v1[n-1], min=v1[0];
		vi v2(mx+2,0);
		if(min!=0){
			cout<<1<<endl;
		}
		else if(n==1){
			cout<<1<<endl;
		}
		else{
			ll count=0, ind=0, ref=0,cval=0;
			for(int i=0;i<n;i++){
				if(v1[i]>ref){
					if(v1[i]>ref+1){
						cval=-1;
						ind++;
						v2[ind]=0;
						break;
					}
					else{
						ind++;
						ref=v1[i];
						count=1;
						v2[ind]=count;
					}
				}
				else{
					count++;
					v2[ind]=count;
				}
			}
			int cval2=v2[0];
			ll ctr=0,x=0;
			for(int l=1;l<=ind+1;l++){
				if(cval2==0){
					break;
				}
				if(v2[l]>cval2-1){
					x=-1;
					cval2--;
					ctr++;
				}
				else if(v2[l]==cval2-1){
					cval2--;
					ctr++;
					if (v2[l+1]<cval2-1){
                        x=-1;
                    }
				}
				else{
                    cval2=v2[l];
                    ctr++;
                    if (v2[l+1]<cval2-1){
                        x=-1;
                    }
                }

			}
			ll res=0;
			if (x==-1 || cval==-1){
                res=ctr+1;
            }
            else{
                res=ctr;
            }
            cout<<res<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}