#pragma once
#include"Person.h"
#include<vector>
#include<string>
using namespace std;
/*
AddressBook�࣬���Դ���������������ϵ�ˣ�Person�ࣩ��������һϵ��Add��Save��Query������UTF8ToGB����������UTF-8->GBKת����������Ĭ��
ʹ��GBK�����ϵͳ�п������Ա�֤�ַ���ʾ��ȷ��Ĭ�ϲ�ʹ��
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