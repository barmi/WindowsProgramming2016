// Account1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

const int NAME_LEN = 20;
const int MAX_ACCOUNT = 10;

struct Account
{
	int id;     // ���¹�ȣ
	int balance;    // �ܾ�
	char name[NAME_LEN];    // ���̸�
};

void PrintMenu(); // �޴���� 
void MakeAccount(); // ���� ������ ���� �Լ� 
void Deposit(); // �� �� 
void Withdraw(); // �� �� 
void Remainder(); // �ܾ� ��ȸ 

int g_menu;
int g_account[MAX_ACCOUNT];
int g_cur_account = 0;

int main()
{
	do
	{
		PrintMenu();
		switch (g_menu)
		{
		case 1:
			MakeAccount();
			break;
		case 2:
			Deposit();
			break;
		case 3:
			Withdraw();
			break;
		case 4:
			Remainder();
			break;
		}
	} while (g_menu != 9);

	return 0;
}

// �޴���� 
void PrintMenu()
{
	cout << "=================" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��ü�� �ܾ���ȸ" << endl << endl;
	cout << "9. ����" << endl;
	cout << "=================" << endl;
	cout << " �޴����� : ";

	cin >> g_menu;
}

// ���� ������ ���� �Լ�
void MakeAccount()
{

}

// �� �� 
void Deposit()
{
}

// �� �� 
void Withdraw()
{
}

// �ܾ� ��ȸ 
void Remainder()
{
}
