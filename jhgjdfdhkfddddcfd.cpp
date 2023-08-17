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
	float n;
	scanf("%f",&n);
	float sqrt=n;
	for(int i=0;i<=(n/2)+1;i++){
		sqrt=(sqrt+(n/sqrt))/2;
	}
	printf("The root is %f\n",sqrt);

	return 0;
}