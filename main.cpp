#include<iostream>
#include<vector>
#include"AddressBook.h"
#include<fstream>

using namespace std;

int main()
{
	//����һ��ͨѶ¼
	AddressBook a;

	//ͨ���ļ������ϵ��
	a.Add_by_file("record.txt");

	//�����ǰ����ϵ��
	a.Output();
	cout << "Read and output file sucessfully" << endl;
	cout << "---------------------------" << endl;

	//ͨ���ļ���ѯ��ϵ�˲��ұ������ļ���
	a.query_by_file("query.txt");
    return 0;
}

