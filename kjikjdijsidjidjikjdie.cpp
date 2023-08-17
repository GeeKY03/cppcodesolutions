#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len =s.length();
		if(len%2!=0){
			cout<<-1<<endl;
		}
		else{
			int arr1[len/2];
			int arr2[len/2];
			for(int i=0;i<(len/2);i++){
				arr1[i]=s[i];
			}
			for(int i=len/2;i<len;i++){
				arr2[i-(len/2)]=s[i];
			}
			sort(arr1, arr1+(len/2));
			sort(arr2, arr2+(len/2));
			int count=0;
			for(int i=0;i<len/2;i++){
				int num=0;
				for(int j=0;j<len/2;j++){
					if(arr1[i]==arr2[j]){
						num++;
					}
				}
				if(num>0){
					count++;
				}
			}
			cout<<(len/2)-count<<endl;
		}
	}
	return 0;
}