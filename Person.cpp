#include "Person.h"
#include<iostream>
#include<sstream>
using namespace std;

//定义get和set方法
const string Person::getSex() const
{
	return sex;
}

void Person::setSex(string sex) {
	this->sex = sex;
}

const string& Person::getName() const {
	return name;
}

void Person::setName(const string& name) {
	this->name = name;
}

const string& Person::getPhone() const {
	return phone;
}

void Person::setPhone(const string& phone) {
	this->phone = phone;
}

//构造函数，读取一个字符串，解析后进行赋值
Person::Person(string s)
{
	stringstream input(s);
	string n, sex, p;
	input >> n;
	setName(n);
	input >> sex;
	setSex(sex);
	input >> p;
	setPhone(p);
}
//<<运算符的重载
ostream & operator<<(ostream & os, const Person & a)
{
	os << a.name<< " " << a.sex << " " << a.phone;
	return os;
}
