#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++){
		long long int x1,p1;
		long long int x2, p2;
		cin>>x1>>p1>>x2>>p2;
		long long int u=pow(10,p1);
		cout<<u<<endl
		long long int p=pow(10,p2);
		cout<<p<<endl;
		cout<<x1<<" "<<x2<<endl;
		// if(x1>x2){
		// 	cout<<">"<<endl;
		// }
		// else if(x2>x1){
		// 	cout<<"<"<<endl;
		// }
		// else if(x2==x1){
		// 	cout<<"="<<endl;
		// }
	}
    return 0;
}