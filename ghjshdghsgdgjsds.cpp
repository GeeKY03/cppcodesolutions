#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

double c;

bool good(double mid){
	double ans=(mid*mid)+sqrt(mid);
	// cout<<ans<<endl;
	return ans>=c;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin>>c;
	double l=0,r=100000;
	while(r-l>=0.0000001){
		double mid=(l+r)/2.0;
		if(good(mid)){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	cout << fixed << setprecision(7) << r << endl;





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}