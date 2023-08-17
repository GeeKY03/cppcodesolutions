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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int testcases;
	cin>>testcases;
	while(testcases--){
		int num;
		cin>>num;
		int array[64]={};
		for(int i=0;i<num;i++){
			int numm;
			int counter=0;
			cin>>numm;
			while(numm>0){
				if(array[counter]!=1){
					array[counter]=numm%2;
				}
				counter++;
				numm/=2;
			}
		}
		int one=0;
		for(int i=0;i<64;i++){
			if(array[i]==1){
				one++;
			}
			else{
				continue;
			}
		}
		cout<<one<<endl;
	}

	return 0;
}

