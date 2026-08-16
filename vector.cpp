#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
//	vector<int> vec={3,4,2,6,1,7,9};
//	sort(vec.begin(),vec.end());//排序 
//	for(auto& i:vec){
//		cout<<++i<<'\n';//可见改变了vec的值； 
//	}
//	for(auto& i:vec){
//		cout<<i;
//	}

    vector<int> vec={2,3,4,2,2,5,6,3,3,8,9};
    sort(vec.begin(),vec.end());
    auto last =unique(vec.begin(),vec.end());//这里unique返回的是重复的第一个值； 
    vec.erase(last, vec.end());
    for(auto&num:vec){
    	cout<<num;
	}
	cout<<endl;
	
//函数
    std::vector<int> numbers;
	numbers.push_back(5); //插入数据 
	numbers.push_back(2); 
	numbers.push_back(8); 
	numbers.push_back(5); 
	numbers.push_back(1); 
	numbers.push_back(2); 
	numbers.push_back(9); 
	numbers.push_back(8); 
	for(auto& i:numbers){
	cout<<i;
    }cout<<endl;
    
    numbers.insert(numbers.begin()+2,3);//在下标为2的地方插入3；就是原来下标2的位置往后挪 
    numbers.erase(numbers.begin()+4);//删除了下标为4的数；
    for(auto& i:numbers){
	cout<<i;
    }cout<<endl;
	if(numbers.empty()){
		cout<<"向量为空"<<endl;
	} else{
		cout<<"向量不为空"<<endl;
	}
	cout<<"获取大小"<<numbers.size()<<endl;
	numbers.clear();//清空 
	if(numbers.empty()){
		cout<<"向量为空"<<endl;
	} else{
		cout<<"向量不为空"<<endl;
	}
	return 0;
}
