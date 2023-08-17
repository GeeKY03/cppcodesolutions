#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_smart_number(int num) {
    int val = sqrt(num);
    long long int count=0;
    for(int i=1;i<=num;i++){
    	if(num%i==0){
    		count++;
    	}
    }
    if(count%2==0){
    	return false;
    }
    else{
    	return true;
    }
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}



