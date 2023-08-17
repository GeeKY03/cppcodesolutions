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
	vi a={1, 2, 3, 3, 2};
	vi b={1, 3 ,3, 2, 2};
	int flag=0;
	// for(int i=0;i<5;i++){
	// 	if(flag==1){
	// 		break;
	// 	}
	// 	if(a[i]!=b[i]){
	// 		for(int j=i;j<5;j++){
	// 			if(a[i]==a[j]){
	// 				rotate(a.begin()+2,a.begin()+1,a.begin()+j);
	// 				flag=1;
	// 				break;
	// 			}
	// 		}
	// 	}
	// }
	rotate(a.begin()+2,a.begin()+1,a.begin()+4);
	for(auto x:a){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:b){
		cout<<x<<" "; 
	}
	cout<<endl;

	return 0;
}