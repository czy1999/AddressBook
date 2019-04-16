#ifndef Person_H_
#define Person_H_

#include<string>
using namespace std;

class Person {
private:
	string name;
	string sex;
	string phone;
public:
	//定义get和set方法
	const string getSex() const;
	void setSex(string male);
	const string& getName() const;
	void setName(const string& name);
	const string& getPhone() const;
	void setPhone(const string& phone);
	//构造函数，读取一个字符串，解析后进行赋值
	Person(string s);
	//<<运算符的重载
	friend ostream &operator <<(ostream &os, const Person &a);
};

#endif /* Person_H_ */