#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int odd=0;
	long long int even=0; 
	long long int array[n];
	for(long long int i=0;i<n;i++){
		long long int num;
		cin>>num;
		array[i]=num;
		if(num%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
		if(odd==1){
			for(long long int j=0;j<n;j++){
				if(array[j]%2==0){
					continue;
				}
				else{
					cout<<j+1<<endl;
					break;
				}
			}
		}
		else if(even==1){
			for(long long int k=0;k<n;k++){
				if(array[k]%2==0){
					cout<<k+1<<endl;
					break;
				}
			}
		}
	return 0;
}