#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int k;
	cin>>k;
	string array1[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	string array2[]={"A","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	for(int i=0;i<n;i++){
		if(s[i]>96){
			cout<<array1[s[i+k]-65];
		}
	}
	return 0;
}