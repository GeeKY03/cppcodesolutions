#include<iostream>
using namespace std;
int main(){
	int a,b,n;
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++){
		a=a*10;
		int count=0;
		for(int j=1;j<10;j++){
			if((count==0)&&((a+j)%b==0)){
				a=a+j;
				count++;
			}
		}
	}
	if(a%10==0){
		cout<<-1<<endl;
	}
	else{
		cout<<a<<endl;
	}
	return 0;
}