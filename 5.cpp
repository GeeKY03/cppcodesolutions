// There were a few issues with a char input in c, it could have been avoided by taking char input first but i preferred writing in c++ :)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int bal, age;
	char gender;
	cin>>bal>>age>>gender;
	if(age>=60){
		if(bal>50000){
			cout<<"Bonus: "<<bal*0.1<<endl;
		}
		else{
			cout<<"Bonus: "<<bal*0.08<<endl;
		}
	}
	else if((gender=='F')||(gender=='f')){
		if(bal>10000){
			cout<<"Bonus: "<<bal*0.05<<endl;
		}
		else{
			cout<<"Bonus: "<<bal*0.02<<endl; 
		}
	}
	else{
		cout<<"Bonus: "<<bal*0.02<<endl;
	}

	return 0;
}