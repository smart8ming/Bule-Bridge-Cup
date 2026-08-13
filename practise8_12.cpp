#include<bits/stdc++.h>
using namespace std;
char N[100];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string s(N);
	getline(cin,s);
	reverse(s.begin(),s.end());
	cout<<s<<endl;//可以直接把string当数组一样输出； 
	return 0;
}
