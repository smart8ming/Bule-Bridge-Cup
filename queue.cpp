#include<bits/stdc++.h>
using namespace std;
const int N=2e3+9;
int q[N], hh=1,tt=0;
int ans;
int main(){
	int m,n;cin>>m>>n;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		bool tag=false;
		for(int j=hh;j<=tt;j++){
			if(q[j]==x)tag=true;
		}
		if(tag)
		continue;
		if(tt-hh+1==m)hh++;
		q[++tt]=x;
		ans++;	
	} 
	cout<<ans<<'\n';
	return 0;
}
