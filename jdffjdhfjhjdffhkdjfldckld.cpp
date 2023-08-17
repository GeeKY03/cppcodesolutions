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


	int n;
	cin>>n;
	vi v1;
	vi v2;
	for(int i=0;i<(2*n);i++){
		int num;
		cin>>num;
		v1.pb(num);
	}
	v2.pb(v1[0]);
	cout<<v1[0]<<" ";
	v1[0]=0;
	// for(int j=0;j<(2*n);j++){
	// 	cout<<v1[j]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<v2.size();i++){
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<(2*n);i++){
	// 	if(v1[i]==5){
	// 		cout<<v2[v2.size()-1]<<" ";
	// 		v2.pb(v1[i-1]);
	// 	}
	// }
	int count=1;
	for(int j=0;count<n;j++){
	for(int i=0;i<2*n;i++){
		if(count==1){
			// if()
		}
		if(v2[count-1]==v1[i]){
			if(i%2==0){
				v2.pb(v1[i+1]);
				count++;
				if(v1[i+1]==v2[0]){
					break;
				}
				cout<<v1[i+1]<<" ";
				v1[i+1]=0;
				v1[i]=0;
			}
			else{
				v2.pb(v1[i-1]);
				count++;
				if(v1[i-1]==v2[0]){
					break;
				}
				cout<<v1[i-1]<<" ";
				v1[i]=0;
				v1[i-1]=0;
			}
		}
			
	}
    }
	// for(int i=0;i<2*n;i++){
	// 	cout<<v1[i]<<" ";
	// }
	// for(int i=0;i<v2.size();i++){
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<n-2;i++){
	// 	if(v2.size()==n){
	// 		break;
	// 	}
	// 	else{
	// 		for(int j=0;j<(2*n);j++){
	// 			if((v1[j]==v2[v2.size()-1])&&(j%2==0)){
	// 				v2.pb(v1[j+1]);
	// 				cout<<v1[j+1]<<" ";
	// 				v1[j]=0;
	// 				v1[j+1]=0;
	// 			}
	// 			else{
	// 				v2.pb(v1[j-1]);
	// 				cout<<v2[j-1]<<" ";
	// 				v1[j]=0;
	// 				v1[j-1]=0;
	// 			}
	// 		}
	// 	}
	// }
	// for(int i=0;i<(2*n);i++){
	// 	if((v1[i]==v2[v2.size()-1])&&(i%2==0)){
	// 		cout<<v1[i+1]<<" ";
	// 		v2.pb(v1[i+1]);
	// 		v1[i+1]=0;
	// 		v1[i]=0;
	// 	}
	// 	if(v2.size()==n){
	// 		break;
	// 	}
	// }

	return 0;
}