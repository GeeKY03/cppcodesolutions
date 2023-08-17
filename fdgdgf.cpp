#include <iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        long long int a,b;
        string s;
        cin>>s;
        cin>>a>>b;
        for(int h=a;h<=b;h++){
        int binaryNum[32];
        int n=h;
            int i = 0;
            while (n > 0) {
                        binaryNum[i] = n % 2;
                        n = n / 2;
                        i++;
            }
            for (int j = i - 1; j >= 0; j--)
                s=s+to_string(binaryNum[j]);  
                cout<<s<<endl;     
            }
    }
    return 0;
}