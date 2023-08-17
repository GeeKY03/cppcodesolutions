#include<bits/stdc++.h>
using namespace std;
int main(){
	int array[]={1,2,3,4,5,6,7,8,9,10};
	cout<<accumulate(array,array+10,0LL);
	return 0;
}