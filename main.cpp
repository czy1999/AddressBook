#include<iostream>
#include<vector>
#include"AddressBook.h"
#include<fstream>

using namespace std;

int main()
{
	//建立一个通讯录
	AddressBook a;

	//通过文件添加联系人
	a.Add_by_file("record.txt");

	//输出当前的联系人
	a.Output();
	cout << "Read and output file sucessfully" << endl;
	cout << "---------------------------" << endl;

	//通过文件查询联系人并且保存在文件里
	a.query_by_file("query.txt");
    return 0;
}

