#include<iostream>
using namespace std;
int main(){
	int levels;
	cin>>levels;
	int size;
	cin>>size;
	int array1[size*2];
	int array2[size];
	for(int i=0;i<size*2;i++){
		int num;
		cin>>num;
		array1[i]=num;
	}
	// for(int i=0;i<size*2;i++){
	// 	cout<<array1[i]<<" ";
	// }
	int count=0;
	for(int j=1;j<=size*2;j++){
		for(int k=0;k<size*2;k++){
			if(array1[k]==j){
				count++;
				break;
			}
		}
	}
	if(count==levels){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}