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
	int x,y;
	cin>>x>>y;
	int x1=1,y1=1;
	int turn=1;
	int flag=0;
	if(((x==0)&&(y==0))||((x==1)&&(y==0))){
		cout<<0<<endl;
	}
	else if((x==1)&&(y==1)){
		cout<<1<<endl;
	}
	else{
		for(int i=2;i<=201;i++){
			// cout<<x1<<" "<<y1<<endl;
			if(i&1){
				turn++;
				for(int j=0;j<i;j++){
					x1++;
					if((x==x1)&&(y==y1)){
						flag=1;
						break;
					}
				}
				if(flag){
					break;
				}
				turn++;
				for(int j=0;j<i;j++){
					y1++;
					if((x==x1)&&(y==y1)){
						flag=1;
						break;
					}
				}
				if(flag){
					break;
				}
			}
			else{
				turn++;
				for(int j=0;j<i;j++){
					x1--;
					if((x==x1)&&(y==y1)){
						flag=1;
						break;
					}
				}
				if(flag){
					break;
				}
				turn++;
				for(int j=0;j<i;j++){
					y1--;
					if((x==x1)&&(y==y1)){
						flag=1;
						break;
					}
				}
				if(flag){
					break;
				}
			}
		}
		cout<<turn<<endl;
	}


	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}