#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<string> arr){
    int answer=0;
    return answer;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        getline(cin,arr[i]);
        // cout<<arr[i]<<endl;
    }
    int len1 = arr[0].length();    
    int len2 = arr[1].length();
    int a,b;
    string s1=arr[0];
    string s2=arr[1];
    for(int i=0;i<len1;i++){
        string s;
        if(s1[i]==44){
            for(int j=i+2;j<len1;j++){
                s=s+s1[i];
            }
            cout<<s<<endl;
        }
    } 
    // cout<<solve(n,arr);
    return 0;
}