#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll hanoi(ll n){
	if(n==1)return 1;
	return hanoi(n-1)+1+hanoi(n-1);//注意这里为什么是两个hanoi（n-1） 
}
int main(){
	ll n;
	cin>>n;
	cout<<hanoi(n)<<'\n';
	return 0;
}
