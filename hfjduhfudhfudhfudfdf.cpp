#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int index=0;
	int mindiff=abs(array[0]-array[n-1]);
	for(int i=1;i<n;i++){
		if(abs(array[i]-array[i-1])<mindiff){
			mindiff=abs(array[i]-array[i-1]);
			index=i;
		}
	}
	if(mindiff==abs(array[0]-array[n-1])){
		cout<<n<<" "<<1<<endl;
	}
	else{
		cout<<index<<" "<<index+1<<endl;
	}
	return 0;
}