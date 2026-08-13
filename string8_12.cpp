#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string str;
	string str1="hello world";
	string str2="fine";
	//使用宁一个对象来初始化字符串
	string str3=str1;
	cout<<str3<<endl; 
	//使用部分字符来初始化字符串；substr(开始数组位置,长度); 
	 string str4=str1.substr(0,5);
	 cout<<str4<<endl; 
	 //使用字符数组初始化；
	 char *chararry="happy";
	 string str5(chararry);
	 cout<<str5<<endl;
	 //使用重复的字符初始化；
	 string str6(5,'A');
	 cout<<str6<<endl; 
	 //用成员函数c_str()将string转换为字符串；
	  string str7="buff";
	  printf("%s\n",str7.c_str()); //因为这里printf输出时需要转换；
	return 0;
 } 
