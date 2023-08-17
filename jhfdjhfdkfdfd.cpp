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
	int n;
	cin>>n;
	ll sum=0;
	int flag=0;
	map<string, int> mp;
	for(int i=0;i<n;i++){
		int dist=0;
		string s;
		cin>>dist>>s;
		if((s=="North")){
			mp["North"]+=dist;
		}
		else if((s=="South")){
			mp["South"]+=dist;
		}
		if(i==0){
			if(s!="South"){
				flag=1;
			}
			else{
				if(dist>(20000-sum)){
					flag=1;
				}
				int quo=dist/20000;
				int rem=dist%20000;
				if(quo&1){
					sum+=20000-rem;
				}
				else{
					sum+=rem;
				}
			}
		}
		else{
			if((sum==0)&&(s!="South")){
				flag=1;
			}
			else if((sum==20000)&&(s!="North")){
				flag=1;
			}
			else if(s=="South"){
				if(dist>(20000-sum)){
					flag=1;
				}
				sum+=dist;
				if(sum>20000){
					int quo=sum/20000;
					int rem=sum%20000;
					if(quo&1){
					sum=20000-rem;
				    }
				    else{
					    sum=rem;
				    }
				}
			}
			else if(s=="North"){
				if(dist>sum){
					flag=1;
				}
				sum-=dist;
				if(sum<0){
					sum*=-1;
					int quo=sum/20000;
					int rem=sum%20000;
					if(quo&1){
						sum=rem;
					}
					else{
						sum=20000-rem;
					}
				}
			}
		}
	}
	int flag2=0;
	if(mp["North"]-mp["South"]!=0){
		flag2=1;
	}
	if(sum!=0){
		flag=1;
	}
	if((flag==1)||(flag2==1)){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	// cout<<mp["North"]<<endl;
	// cout<<mp["South"]<<endl;
	// cout<<flag2<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}