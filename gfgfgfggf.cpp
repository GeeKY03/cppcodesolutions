#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int array[t];
	int co=0;
	int ce=0;
	for(int i=0;i<t;i++){
		int num;
		cin>>num;
		array[i]=num;
		if(num%2==0){
			ce++;
		}
		else{
			co++;
		}
		// cout<<co<<" "<<ce<<endl;
		if(co>ce){
			for(int j=0;j<t;j++){
				if(array[j]%2==0){
					cout<<i+1<<endl;
					break;
					break;
				}
				else{
					continue;
				}
			}
		}
	}
	return 0;
}