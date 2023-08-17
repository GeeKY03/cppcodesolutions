#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k;
	cin>>n>>k;
	long long int array[n];
	for(long long int i=0;i<n;i++){
		long long int num;
		cin>>num;
		array[i]=num;
	}
	if(k==0){
		cout<<n<<endl;
		break;
	}
	long long int x= sizeof(array)/ sizeof(array[0]);
	sort(array, array+x); 
	if (array[k-1]==array[k]){
		cout<<-1<<endl;
	}
	else if(array[k-1]==(array[k]+1)){
		cout<<array[k-1]<<endl;
	}
	else{
		cout<<array[k-1]+1<<endl;
	}
	return 0;
}