#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//size_t arraySize = 10;
    //int *pia = new int[arraySize];

	//初始化一个元素数为10的容器
	const int vectorSize = 10;
	vector<int> A(vectorSize);//empty vector

	//自己手动输入,当多余输入时只取前vectorSize个数
	for(vector<int>::iterator iter = A.begin(); iter != A.end(); ++iter)
		cin >> *iter;
	//打印出来
	for(vector<int>::iterator iter = A.begin(); iter != A.end(); ++iter)
			cout << *iter << " ";//自己手动输入
	cout << endl;

	//插入排序的算法内容,注意c++中容器下标从0开始
	for(int j = 1; j <= A.size(); ++j){
		int key = A[j];
		int i = j-1;
		while (i >= 0 && A[i] > key) {
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}
	//算法结束，打印输出排序后的元素
	for(vector<int>::iterator iter = A.begin(); iter != A.end(); ++iter)
			cout << *iter << " ";//自己手动输入
	cout << endl;
}
