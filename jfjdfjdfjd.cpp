#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int rec=0;
	long long int count=0;
	for(long long int i=0;i<n;i++){
		int num;
		cin>>num;
		if((i==0)&&(num<0)){
			count++;
		}
		else if(num>=0){
			rec=rec+num;
		}
		else if(num==-1){
			if(rec+num<0){
				count++;
			}
			else{
				rec=rec+num;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}