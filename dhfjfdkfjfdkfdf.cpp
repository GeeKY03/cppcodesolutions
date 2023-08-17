#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int i,j,k,n; 
    cin>>n; 
    int a[n]; 
    for(i=1;i<=n;i++) 
        cin>>a[i]; 
     for(k=1;k<=n;k++) 
     { 
         for(i=k;i<=n;i++) 
         { 
         	int max=0;
             for(j=k;j<=i;j++) 
             { 
                 if(a[j]>max){
                 	max=a[j];
                 }
             } 
         cout<<max<<endl; 
         } 
     } 
    return 0; 
} 