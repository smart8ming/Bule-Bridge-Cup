#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	set<int> myset;
	//插入元素
	myset.insert(5); 
	myset.insert(2); 
	myset.insert(8); 
	myset.insert(2); //这个重复的它是不回输出的 
	
	for(auto& i:myset){
		cout<<i<<" ";
	}
	cout<<endl;
	
	auto it=myset.find(5);
	if(it!=myset.end()){
		cout<<"found in the set"<<endl;//找不到就会返回myset.end() 
	}else{
		cout<<"not found in the set"<<endl;
	}
	
	myset.erase(2);
	for(auto& i:myset){
		cout<<i<<" ";
	}
	cout<<endl;
	
	myset.clear();
	
	if(myset.empty()){
		cout<<"set is empty"<<endl;
	}
	else{
		cout<<"set is not empty"<<endl;
	}
	return 0;
}

