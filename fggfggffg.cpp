#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int max=0;
	int min=0;
	int count=0;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(i==0){
			min =num;
			max=num;
		}
		else{
			if(num>max){
				count++;
				max=num;
			}
			else if(num<min){
				count++;
				min=num;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}