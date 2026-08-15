#include<bits/stdc++.h>
using namespace std;
const int N=105;
int stk[N];
int top;
char s[N];
int main(){
	int n;cin>>n;
	cin>>s+1;
	for(int i=1;i<=n;++i){
		if(s[i]==')'){
			if(top && stk[top]=='(')
			{
				top--;
				continue;//注意这里一定要跳出循环才不会top++; 
			}
		}
		stk[++top]=s[i];
	}
	if(top)cout<<"no"<<'\n';
	else cout<<"yes"<<'\n';
	return 0;
} 

