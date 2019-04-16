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
	//����get��set����
	const string getSex() const;
	void setSex(string male);
	const string& getName() const;
	void setName(const string& name);
	const string& getPhone() const;
	void setPhone(const string& phone);
	//���캯������ȡһ���ַ�������������и�ֵ
	Person(string s);
	//<<�����������
	friend ostream &operator <<(ostream &os, const Person &a);
};

#endif /* Person_H_ */