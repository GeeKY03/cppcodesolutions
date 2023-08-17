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
	int xa,ya,xb,yb,xc,yc;
	set<pair<int,int>> sett;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	sett.insert({xa,ya});
	sett.insert({xb,yb});
	sett.insert({xc,yc});
	double discab=(((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya)));
	double ab=sqrt(discab);
	// cout<<ab<<endl;
	double discac=(((xc-xa)*(xc-xa))+((yc-ya)*(yc-ya)));
	double ac=sqrt(discac);
	// cout<<ac<<endl;
	double disccb=(((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)));
	double cb=sqrt(disccb);
	// cout<<cb<<endl;
	double arr[]={ab,cb,ac};
	sort(arr,arr+3);
	if(arr[0]==ab){
		// make x equal
		if(xb>xa){
			int difx=xb-xa;
			for(int i=0;i<difx;i++){
		    	xa++;
		    	sett.insert({xa,ya});
		    }
		}
		else{
			int difx=xa-xb;
			for(int i=0;i<difx;i++){
		    	xa--;
		    	sett.insert({xa,ya});
		    }
		}
		// cout<<difx<<endl;
		if(yb>ya){
			int dify=yb-ya;
			for(int i=0;i<dify;i++){
				ya++;
				sett.insert({xa,ya});
			}
		}
		else{
			int dify=ya-yb;
			for(int i=0;i<dify;i++){
				ya--;
				sett.insert({xa,ya});
			}
		}
	    map<double,pair<int,int>> mp;
	    for(auto x:sett){
	    	// cout<<x.first<<" "<<x.second<<endl;
	    	int x1=x.first;
	    	int y1=x.second;
	    	double disc=(((x1-xc)*(x1-xc))+((y1-yc)*(y1-yc)));
	    	double dist=sqrt(disc);
	    	mp[dist]={x1,y1};
	    }
	    // for(auto x:mp){
	    // 	cout<<x.first<<"  "<<(x.second).first<<" "<<(x.second).second<<endl;
	    // }
	    
	}
	else if(arr[0]==ac){
		if(xc>xa){
			int difx=xc-xa;
			for(int i=0;i<difx;i++){
		    	xa++;
		    	sett.insert({xa,ya});
		    }
		}
		else{
			int difx=xa-xc;
			for(int i=0;i<difx;i++){
		    	xa--;
		    	sett.insert({xa,ya});
		    }
		}
		if(yc>ya){
			int dify=yc-ya;
			for(int i=0;i<dify;i++){
				ya++;
				sett.insert({xa,ya});
			}
		}
		else{
			int dify=ya-yc;
			for(int i=0;i<dify;i++){
				ya--;
				sett.insert({xa,ya});
			}
		}
		map<double,pair<int,int>> mp;
	    for(auto x:sett){
	    	// cout<<x.first<<" "<<x.second<<endl;
	    	int x1=x.first;
	    	int y1=x.second;
	    	double disc=(((x1-xb)*(x1-xb))+((y1-yb)*(y1-yb)));
	    	double dist=sqrt(disc);
	    	mp[dist]={x1,y1};
	    }
	    // for(auto x:mp){
	    // 	cout<<x.first<<"  "<<(x.second).first<<" "<<(x.second).second<<endl;
	    // }
	}
	else if(arr[0]==cb){
		if(xb>xc){
			int difx=xb-xc;
			for(int i=0;i<difx;i++){
		    	xc++;
		    	sett.insert({xc,yc});
		    }
		}
		else{
			int difx=xc-xb;
			for(int i=0;i<difx;i++){
		    	xc--;
		    	sett.insert({xc,yc});
		    }
		}
		if(yb>yc){
			int dify=yb-yc;
			for(int i=0;i<dify;i++){
				ya++;
				sett.insert({xc,yc});
			}
		}
		else{
			int dify=yc-yb;
			for(int i=0;i<dify;i++){
				yc--;
				sett.insert({xc,yc});
			}
		}
		map<double,pair<int,int>> mp;
	    for(auto x:sett){
	    	// cout<<x.first<<" "<<x.second<<endl;
	    	int x1=x.first;
	    	int y1=x.second;
	    	double disc=(((x1-xa)*(x1-xa))+((y1-ya)*(y1-ya)));
	    	double dist=sqrt(disc);
	    	mp[dist]={x1,y1};
	    }
	    // for(auto x:mp){
	    // 	cout<<x.first<<"  "<<(x.second).first<<" "<<(x.second).second<<endl;
	    // }
	}



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}