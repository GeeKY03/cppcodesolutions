#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	int array1[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		array[i]=num;
		array1[i]=num;
	}
	sort(array, array+n);
	int mindiff=abs(array1[0]-array1[n-1]);
	int num1,num2;
	for(int i=1;i<n;i++){
		int diff=array[i]-array[i-1];
		if(diff<mindiff){
			mindiff=diff;
			num1=array[i];
			num2=array[i-1];
		}
	}
	int c1=0;
	int c2=0;
	for(int i=0;i<n;i++){
		if((array1[i]==num1)&&(c1==0)){
			cout<<i+1<<" ";
			array1[i]=-1;
			c1++;
		}
		if((array1[i]==num2)&&(c2==0)){
			cout<<i+1<<" ";
			array1[i]=-1;
			c2++;
		}
	}
	cout<<endl;
	return 0;
}