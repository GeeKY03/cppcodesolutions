#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int num;
		cin>>num;
		int array[num];
		for(int j=0;j<num;j++){
			int a;
			cin>>a;
			array[j]=a;
		}
		int x=sizeof(array)/ sizeof(array[0]);
		sort(array, array+x);
		vector <int> v;
		for(int j=0;j<num-1;j++){
			for(int k=j+1;k<num;k++){
				int diff= array[j]-array[k];
				if(diff<0){
					diff=diff*(-1);
					v.push_back(diff);
				}
				else{
					v.push_back(diff);
				}
			}
		}
		cout<<*min_element(v.begin(), v.end())<<endl;
	}
	return 0;
}