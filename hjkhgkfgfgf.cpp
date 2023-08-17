#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
     int n;cin>>n;
     int arr[n];
     int u=0,two=0,one=0,x=0,y=0;
     for(int i=0 ; i<n ; i++)
     {
         cin>>arr[i];
         if(arr[i]==1)
         {
             one++;
         }
         else
         {
             if(arr[i]==2)
             {
                 two++;
             }
               x+=arr[i];
               y++;
              if(arr[i]%2)
               {
                    u++;
              }
         }
         
     }
     if(one==1)
     {
         if(!(u % 2))
         {
             cout<<"CHEF"<<endl;
             continue;
         }
         if( two == 0 )
         {
             cout<<"CHEFINA"<<endl;
             continue;
             
         }
         x-=2;
         y--;
         if((x-y)%2)
         {
            cout<<"CHEFINA"<<endl;
            continue;
         }
         else
         {
             cout<<"CHEF"<<endl;
             continue;
         }
     }
     else if(one>1){
         if((x-y)%2)
         {
             cout<<"CHEF"<<endl;
             continue;
         }
         else
         {
            cout<<"CHEFINA"<<endl;
            continue;
         }
     }
     if(u%2)
     {
            cout<<"CHEF"<<endl;
            continue;
     }
     else
     {
             cout<<"CHEFINA"<<endl;
             continue;
     }
     
  }
  return 0;
}