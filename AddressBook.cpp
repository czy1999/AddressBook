#include "AddressBook.h"
#include<iostream>
#include <fstream>
#include<string>
using namespace std;

//往AddressBook中添加一个Person类
void AddressBook::Add(Person & p)
{
	people.push_back(p);
}

//通过string类型往AddressBook中添加一个Person类
void AddressBook::Add(string s)
{
	//使用person的构造函数生成一个Person对象
	Person temp(s);
	Add(temp);
}

//输出AddressBook函数
void AddressBook::Output(){
	for (unsigned int i = 0; i<people.size(); i++)
		cout << people.at(i) << endl;
	
}

//通过文件的方式添加联系人
void AddressBook::Add_by_file(string filepath)
{
	ifstream input(filepath, ios::in);
	if (!input)
	{
		cerr << "Open input file error!" << endl;
		exit(-1);
	}
	string temp;
	int n;
	input >> n;
	getline(input, temp);
	while (n--&&getline(input, temp))
	{
		Add(temp);
	}
}
//储存AddressBook到文件中
void AddressBook::Save_to_file(string filepath)
{
	ofstream file(filepath);
	if (file.is_open())
	{
		for (unsigned int i = 0; i<people.size(); i++)
			file<<people.at(i)<<endl;
		file.close();
	}
	else
		cout << "Open file failed!" << endl;
}

//通过文件查询
void AddressBook::query_by_file(string filepath)
{
	ifstream input(filepath, ios::in);
	if (!input)
	{
		cerr << "Open input file error!" << endl;
		exit(-1);
	}
	string temp;
	int n;
	input >> n;
	input >> temp;
	query(n, temp);
}

//查询第n列关键字为s的数据并且保存在文件中
AddressBook AddressBook::query(int n, string s)
{
	AddressBook temp;
	if (n == 1) {
		for (unsigned int i = 0; i < people.size(); i++) {
			if (people.at(i).getName() == s)
				temp.Add(people.at(i));
		}
	}
	else if (n == 2) {
		for (unsigned int i = 0; i < people.size(); i++) {
			if (people.at(i).getSex() == s)
				temp.Add(people.at(i));
		}
	}
	else if (n == 3) {
		for (unsigned int i = 0; i < people.size(); i++) {
			if (people.at(i).getPhone() == s)
				temp.Add(people.at(i));
		}
	}
	else {
		cout << "input wrong keys!" << endl;
		exit(-1);
	}
	cout << "Input keys:"<<n<<" "<<s<<endl;
	cout<<"Keys input successfully!"<<endl;
	cout << "---------------------------" << endl;
	temp.Output();
	temp.Save_to_file("result.txt");
	cout << "Results saved successfully!"<<endl;
	cout << "---------------------------" << endl;

	return temp;
}


