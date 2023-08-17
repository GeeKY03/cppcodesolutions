#include<iostream>
using namespace std;
int main(){
	int l,b;
	cin>>l>>b;
	int count=0;
	for(int i=1;i<=l;i++){
		for(int j=1;j<=b;j++){
			if(i%2==0){
				if(count%2==0){
					if(j==b){
						cout<<"#"<<endl;
						count++;
					}
					else{
						cout<<".";
					}
				}
				else{
					if(j==1){
						cout<<"#";
					}
					else{
						if(j==b){
							cout<<"."<<endl;
							count++;
						}
						else{
							cout<<".";
						}
					}
				}
			}
			else{
				if(j==b){
					cout<<"#"<<endl;
				}
				else{
					cout<<"#";
				}
			}
		}
	}
	return 0;
}