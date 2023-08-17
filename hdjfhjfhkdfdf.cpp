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
	int n;
	cin >> n;
	int a=0,b=0,c=0;
	vi v(7,1000000);
	for(int i=0;i<n;i++){
		ll num;
		string s;
		cin>>num>>s;
		int len = s.size();
		if(len==3){
			if(v[6]>num){
				v[6]=num;
			}
			a++;
			b++;
			c++;
		}
		else if(len==1){
			if(s=="A"){
				if(v[0]>num){
					v[0]=num;
				}
				a++;
			}
			else if(s=="B"){
				if(v[1]>num){
					v[1]=num;
				}
				b++;
			}
			else{
				if(v[2]>num){
					v[2]=num;
				}
				c++;
			}
		}
		else{
			if((s=="AB")||(s=="BA")){
				if(v[3]>num){
					v[3]=num;
				}
				a++;
				b++;
			}
			else if((s=="BC")||(s=="CB")){
				if(v[4]>num){
					v[4]=num;
				}
				b++;
				c++;
			}
			else{
				if(v[5]>num){
					v[5]=num;
				}
				c++;
				a++;
			}
		}
	}
	set<int> sett;
	sett.insert(v[6]);
	sett.insert((v[0]+v[1]+v[2]));
	sett.insert((v[3]+v[2]));
	sett.insert((v[4]+v[0]));
	sett.insert((v[5]+v[1]));
	sett.insert((v[3]+v[4]));
	sett.insert((v[4]+v[5]));
	sett.insert((v[3]+v[5]));
	if((a>0)&&(b>0)&&(c>0)){
	    for(auto x:sett){
		    cout<<x<<endl;
		    break;
	    }
	}
	else{
		cout<<-1<<endl;
	}

	return 0;
}