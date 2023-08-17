#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cout<<"Input format\n"<<"If your grade is A, enter 10\nIf your grade is A-,enter 9\nIf your grade is B, enter 8 and if its lower than B- then\n     BRUH!"<<endl;
	double pi=0;
	cout<<"Enter your grade in PHY-101(Theory)"<<endl;
	int phy101t;
	cin>>phy101t;
	cout<<"Enter your grade in PHY-101(Lab)"<<endl;
	int phy101l;
	cin>>phy101l;
	pi+=(phy101t*11)/45.0;
	pi+=(phy101l*2)/45.0;
	cout<<"Enter your Ma101 grade"<<endl;
	int ma101;
	cin>>ma101;
	pi+=(ma101*11)/45.0;
	cout<<"Enter your ME102 grade"<<endl;
	int me102;
	cin>>me102;
	pi+=(me102*11)/45.0;
	cout<<"Enter your grade in CY101(Theory)"<<endl;
	int cy101t;
	cin>>cy101t;
	pi+=(cy101t*8)/45.0;
	cout<<"Enter your grade in CY101(Lab)"<<endl;
	int cy101l;
	cin>>cy101l;
	pi+=(cy101l*2)/45.0;
	cout<<"Your Goddamn PI is "<<pi<<endl;






	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}