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

	void setAddress(char* _address) // �ּҸ� �����Ѵ�.
	{
		strcpy(address, _address);
	}

	void setSalary(int _salary) // �޿����� �����Ѵ�.
	{
		salary = _salary;
	}

	void display() // �ܼ�ȭ�鿡 ��������� ����Ѵ�.
	{
		cout << name << ", " << personID << ", " << 
			address << ", " << salary << "����" << endl;
	}

}; 

int main()
{
	Employee Hong={"ȫ�浿", "700815", "�泲õ�Ƚ�", 500};
	Employee Park={"����ȣ", "680121","�����",1000};

	Hong.display();	//display(Hong);
	Park.display();	//display(Park);

	Hong.setAddress("����ð�����");	//setAddress(Hong,"����ð�����"); // ȫ�浿 ����� �ּ� ����
	setSalary(Park,200); // ����ȣ ����� �޿� ����

	display(Hong);
	display(Park);

	system("pause");
	return 0;
}
