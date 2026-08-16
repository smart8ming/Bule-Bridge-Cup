#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> mystack;
	mystack.push(10);
	mystack.push(30);
	mystack.push(40);
	mystack.push(20);
	
	cout<<mystack.top()<<endl;
	mystack.pop();
	cout<<mystack.top()<<endl;
	
	if(mystack.empty()) cout<<"Õ»Îª¿Õ"<<endl;
	else cout<<"Õ»Îª·Ç¿Õ"<<endl;
	
	cout<<mystack.size()<<endl;
	
	return 0;
} 
