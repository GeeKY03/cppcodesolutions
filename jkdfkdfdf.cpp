#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int c=100;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,temp;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" " ;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			temp=a[i][j]+c;
			a[i][j]=a[j][i];
			a[j][i]=temp-c;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" " ;
		}
		cout<<endl;
	}

	return 0;
}