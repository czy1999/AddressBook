#pragma once
#include"Person.h"
#include<vector>
#include<string>
using namespace std;
/*
AddressBook类，可以储存任意数量的联系人（Person类），定义了一系列Add，Save，Query方法，UTF8ToGB函数是用于UTF-8->GBK转换，可以在默认
使用GBK编码的系统中开启，以保证字符显示正确，默认不使用
*/
class AddressBook {
private:
	vector<Person> people;

public:
	void Add(Person& p);
	void Add(string s);
	void Output();
	void Add_by_file(string filepath);
	void Save_to_file(string filepath);
	void query_by_file(string filepath);
	AddressBook query(int n, string s);



};