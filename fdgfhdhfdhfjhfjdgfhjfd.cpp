#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int num;
		cin>>num;
		if(num%2!=0){
			cout<<"YES"<<endl;
		}
		else if(num%2==0){
			num=num/2;
			if(num==1){
				cout<<"NO"<<endl;
			}
			else{
			for(int j=0;j<=num/2;j++){
				if(num%2!=0){
					cout<<"YES"<<endl;
				}
				else if(num%256==0){
					num=num/256;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%128==0){
					num=num/128;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%64==0){
					num=num/64;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%32==0){
					num=num/32;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%16==0){
					num=num/16;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%8==0){
					num=num/8;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%4==0){
					num=num/4;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
				else if(num%2==0){
					num=num/2;
					if(num==1){
						cout<<"NO"<<endl;
						break;
					}
				}
			}
		    }
		}
	}
	return 0;
}