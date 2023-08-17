#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int array[n];
	for(int i=0;i<n;i++){
		array[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			if(((j+1)%i==0)&&(j!=0)){
				if(array[j]==0){
					array[j]=1;
				}
				else{
					array[j]=0;
				}
			}
		}
	}
	array[0]=1;
	long long int count=0;
	for(int i=0;i<n;i++){
		if(array[i]==1){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}