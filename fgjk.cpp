#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[7];
	for(int i=0;i<7;i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	int x=sizeof(array)/ sizeof(array[0]);
	sort(array, array+x);
	int count=1;
	for(int i=0;i<6;i++){
		if(array[i]==array[i+1]){
			continue;
		}
		else{
			count++;
		}
	}
	if(count==n){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}