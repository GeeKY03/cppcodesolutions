#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	int n;
	cin>>n;
	int one=0;
	int two=0;
	int three=0;
	int four=0;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num==1){
			one++;
		}
		else if(num==2){
			two++;
		}
		else if(num==3){
			three++;
		}
		else {
			four++;
		}
	}
	int taxi=0;
	if(three>=one){
		if(two%2==0){
			taxi=four+three+(two/2);
		}
		else{
			taxi=four+three+(two/2)+1;
		}
	}
	else{
		if(two%2==0){
			if((one-three)%4==0){
				taxi=four+three+(two/2)+((one-three)/4);
			}
			else{
				taxi=four+three+(two/2)+((one-three)/4)+1;
			}
		}
		else{
			if((one-three)%4==0){
				taxi=four+three+(two/2)+((one-three)/4)+1;
			}
			else{
				if((one-three)%4<=2){
					taxi=four+three+(two/2)+((one-three)/4)+1;
				}
				else{
					taxi=four+three+(two/2)+((one-three)/4)+2;
				}
			}
		}
	}
	cout<<taxi<<endl;
	return 0;
}