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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int flag=0;
	float ab=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	float bc=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	float ac=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	float arr[]={ab,bc,ac};
	sort(arr,arr+3);
	ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	ll y=arr[2]*arr[2];
	if(x==y){
		cout<<"RIGHT"<<endl;
	}
	else{
		if(flag==0){
			float ab=sqrt(((x2-(x1-1))*(x2-(x1-1)))+((y2-y1)*(y2-y1)));
	        float bc=sqrt(((x3-(x1-1))*(x3-(x1-1)))+((y3-y1)*(y3-y1)));
	        float ac=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		if(flag==0){
			float ab=sqrt(((x2-(x1+1))*(x2-(x1+1)))+((y2-y1)*(y2-y1)));
	        float bc=sqrt(((x3-(x1+1))*(x3-(x1+1)))+((y3-y1)*(y3-y1)));
	        float ac=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+((y2-(y1-1))*(y2-(y1-1))));
	        float bc=sqrt(((x3-x1)*(x3-x1))+((y3-(y1-1))*(y3-(y1-1))));
	        float ac=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+((y2-(y1+1))*(y2-(y1+1))));
	        float bc=sqrt(((x3-x1)*(x3-x1))+((y3-(y1+1))*(y3-(y1+1))));
	        float ac=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//x2-1
		if(flag==0){
			float ab=sqrt((((x2-1)-x1)*((x2-1)-x1))+((y2-y1)*(y2-y1)));
	        float bc=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	        float ac=sqrt(((x3-(x2-1))*(x3-(x2-1)))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//x2+1
		if(flag==0){
			float ab=sqrt((((x2+1)-x1)*((x2+1)-x1))+((y2-y1)*(y2-y1)));
	        float bc=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	        float ac=sqrt(((x3-(x2+1))*(x3-(x2+1)))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//y2-1
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+(((y2-1)-y1)*((y2-1)-y1)));
	        float bc=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	        float ac=sqrt(((x3-x2)*(x3-x2))+((y3-(y2-1))*(y3-(y2-1))));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//y2+1
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+(((y2+1)-y1)*((y2+1)-y1)));
	        float bc=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	        float ac=sqrt(((x3-x2)*(x3-x2))+((y3-(y2+1))*(y3-(y2+1))));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//x3+1
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	        float bc=sqrt((((x3+1)-x1)*((x3+1)-x1))+((y3-y1)*(y3-y1)));
	        float ac=sqrt((((x3+1)-x2)*((x3+1)-x2))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//x3-1
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	        float bc=sqrt((((x3-1)-x1)*((x3-1)-x1))+((y3-y1)*(y3-y1)));
	        float ac=sqrt((((x3-1)-x2)*((x3-1)-x2))+((y3-y2)*(y3-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		//y3-1
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	        float bc=sqrt(((x3-x1)*(x3-x1))+(((y3-1)-y1)*((y3-1)-y1)));
	        float ac=sqrt(((x3-x2)*(x3-x2))+(((y3-1)-y2)*((y3-1)-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		if(flag==0){
			float ab=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	        float bc=sqrt(((x3-x1)*(x3-x1))+(((y3+1)-y1)*((y3+1)-y1)));
	        float ac=sqrt(((x3-x2)*(x3-x2))+(((y3+1)-y2)*((y3+1)-y2)));
	        float arr[]={ab,bc,ac};
	        sort(arr,arr+3);
	        ll x=(arr[0]*arr[0])+(arr[1]*arr[1]);
	        ll y=arr[2]*arr[2];
	        if(x==y){
	        	flag=1;
	        }
		}
		if(flag==1){
			cout<<"ALMOST"<<endl;
		}
		else{
			cout<<"NEITHER"<<endl;
		}
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long  double) 1e9) << "s " << endl;
	return 0;
}