#include<iostream>
#include<utility> 
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct person{
	string name;
	int age;
};
int main(){
	pair<int,double> p1(5,3.14);
	pair<char,string> p2('c',"hello");
	cout<<p1.first<<' '<<p2.second<<endl;
	//pair的嵌套  make_pair()
//	pair<int,int>p3(2,3);
	pair<char,pair<int,int>>p4('a',make_pair(9,8));
	cout<<p4.first<<' '<<p4.second.first<<' '<<p4.second.second<<endl;
	
	//pair 有自带的排序规则按first排序，if first相等 按second排序；
	vector<pair<int,int>> vec;
	vec.push_back(make_pair(3,1));
	vec.push_back(make_pair(2,4));
	vec.push_back(make_pair(1,2));
	sort(vec.begin(),vec.end());
	for(auto& i:vec){
		cout<<i.first<<' '<<i.second<<endl;//注意cout不能直接输出pair类型 
	}
	
	//结构体
	vector<person> peo;
	peo.push_back({"alice",25});
	peo.push_back({"bob",30});
	peo.push_back({"charlie",20});
	
	vector<pair<person,int>>scores;
	
	scores.push_back({peo[0],90});//c++新写法，用{}来代替make_pair初始化 
	scores.push_back({peo[1],85});
	scores.push_back({peo[2],95});
    for(auto& i:scores){
    	cout<<i.first.name<<' '<<i.first.age<<' '<<i.second<<endl;//不能直接输出结构体 
	}
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
