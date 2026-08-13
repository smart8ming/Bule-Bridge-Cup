#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
typedef long long ll;
const int N=1e5+9; 
ll a[N];//开一个全局大小为N的数组，自动初始化为0；
using namespace std;
void fun(int *arr,int n)//数组传参 
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<'\n';
	}
}
int main()
{
	char s[20];
	scanf("%[^\n]",s);//表示排除回车，其他可以输入，包括空格； 
	printf("%s\n",s);
	int arr[]={1,2,3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	fun(arr,size);
	return 0;
}


