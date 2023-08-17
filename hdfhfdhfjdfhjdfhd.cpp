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


	// Your code goes here
	int array[]={1,2,3,4,5,6,7,8,9,10};

	int n=sizeof(array)/ sizeof(array[0]);
	
	sort(array, array+n);
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	int k = 0;
    // for (int b = n/2; b >= 1; b /= 2) {
    // while (k+b < n && array[k+b] <= 3) k += b;
    // }
    // if (array[k] == 3) {
    // 	cout<<k<<endl;
    // }

    for(int b=n/2;b>=1;b/=2){
    	while((b+k<n)&&(array[b+k]<=3)){
    		k+=b;
    		cout<<"HI"<<endl;
    	}
    	cout<<"BYE"<<endl;
    }
    if(array[k]==3){
    	cout<<k<<endl;
    }
	return 0;
}