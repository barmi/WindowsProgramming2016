/** Structure2.cpp **/

#include <iostream>
using namespace std;


//����� ���� ����ü
struct Employee
{
	char name[10]; /* �̸� */
	char personID[20]; /* �ֹε�Ϲ�ȣ */
	char address[30]; /* �ּ� */
	int salary; /* �� �޿��� */
}; 

void setAddress(Employee &emp, char* _address) // �ּҸ� �����Ѵ�.
{
	strcpy(emp.address, _address);
}

void setSalary(Employee &emp, int _salary) // �޿����� �����Ѵ�.
{
	emp.salary = _salary;
}

void display(Employee &emp) // �ܼ�ȭ�鿡 ��������� ����Ѵ�.
{
	cout << emp.name << ", " << emp.personID << ", " << 
		emp.address << ", " << emp.salary << "����" << endl;
}


int main()
{
	Employee Hong={"ȫ�浿", "700815", "�泲õ�Ƚ�", 500};
	Employee Park={"����ȣ", "680121","�����",1000};

	display(Hong);
	display(Park);

	setAddress(Hong,"����ð�����"); // ȫ�浿 ����� �ּ� ����
	setSalary(Park,200); // ����ȣ ����� �޿� ����

	display(Hong);
	display(Park);

	system("pause");
	return 0;
}
