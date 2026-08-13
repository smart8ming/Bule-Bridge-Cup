#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	string str="hello world";
	//获取长度函数 length或者size 
	cout<<str.length()<<endl;
	//拼接字符串
	 string str1="happy";
	 string str2=str+','+str1;
	 string str3=str.append(",").append(str1);
	 //注意append（）里面不能是单引号 
	 cout<<str2<<endl;
	 cout<<str3<<endl;
	 //字符查找find返回起始位置 
	 size_t pos=str.find("world"); 
	 cout<<pos<<endl; 
	 //字符串替换replace
	 str.replace(7,5,"happy");//一般位置都是从0开始的； 
	 cout<<str<<endl; 
	 //字符串比较compare;1,-1,0
	 string str4="sorry"; 
	 string str5="thanks"; 
	 int result=str4.compare(str5);
	 cout<<result<<endl;
	 //遍历string的方法
	 string s="hello";
	 for(auto &i:s){
	 	cout<<i;
	 } 
	return 0;
}
