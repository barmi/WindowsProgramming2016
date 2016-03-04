// Account1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

const int NAME_LEN = 20;
const int MAX_ACCOUNT = 10;
const int BASE_ACCOUNT_ID = 1000;

struct Account
{
	int id;     // ���¹�ȣ
	int balance;    // �ܾ�
	char name[NAME_LEN];    // ���̸�
};

// -------------------------------------------
//   �������̸� ���� �Լ�
// -------------------------------------------
void PrintMenu(); // �޴���� 
void MakeAccount(); // ���� ������ ���� �Լ� 
void Deposit(); // �� �� 
void Withdraw(); // �� �� 
void Remainder(); // �ܾ� ��ȸ 


// -------------------------------------------
//   ���� ����
// -------------------------------------------
int g_menu;
Account g_account[MAX_ACCOUNT];
int g_cur_account = 0;

// -------------------------------------------
//   ���� �Լ�
// -------------------------------------------
void PrintAccount(int id);

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

	system("pause");

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
	if (g_cur_account == MAX_ACCOUNT)
	{
		cout << "[���̻� ���¸� ������ �� �����ϴ�.]";
		return;
	}
	
	cout << "* ���°����� ���ؼ� ���� ������ �Է��� �ּ���." << endl;
	cout << " - �̸� : ";
	cin >> g_account[g_cur_account].name;
	cout << " - �ʱ� �Աݾ� : ";
	cin >> g_account[g_cur_account].balance;

	g_account[g_cur_account].id = BASE_ACCOUNT_ID + g_cur_account;
	++g_cur_account;
	cout << "[���¸� �����߽��ϴ�.]" << endl;
}

// �� �� 
void Deposit()
{
	int user_id, user_money;
	cout << "* �Ա��� ���ؼ� ���� ������ �Է��� �ּ���." << endl;
	cout << " - ���¹�ȣ : ";
	cin >> user_id;
	cout << " - �Աݾ� : ";
	cin >> user_money;
	
	if ((user_id < BASE_ACCOUNT_ID) || (user_id > BASE_ACCOUNT_ID + g_cur_account))
	{
		cout << "[���¹�ȣ�� �� �� �Է��߽��ϴ�. Ȯ�� �� �ٽ� �õ��� �ֽñ� �ٶ��ϴ�.]" << endl;
		return;
	}
	g_account[user_id - BASE_ACCOUNT_ID].balance += user_money;

	PrintAccount(user_id);
}

// �� �� 
void Withdraw()
{
	int user_id, user_money;
	cout << "* ����� ���ؼ� ���� ������ �Է��� �ּ���." << endl;
	cout << " - ���¹�ȣ : ";
	cin >> user_id;
	cout << " - ��ݾ� : ";
	cin >> user_money;

	if ((user_id < BASE_ACCOUNT_ID) || (user_id > BASE_ACCOUNT_ID + g_cur_account))
	{
		cout << "[���¹�ȣ�� �� �� �Է��߽��ϴ�. Ȯ�� �� �ٽ� �õ��� �ֽñ� �ٶ��ϴ�.]" << endl;
		return;
	}
	g_account[user_id - BASE_ACCOUNT_ID].balance -= user_money;

	PrintAccount(user_id);
}

// �ܾ� ��ȸ 
void Remainder()
{
	for (int i = 0; i < g_cur_account; ++i)
	{
		PrintAccount(BASE_ACCOUNT_ID + i);
	}
}

void PrintAccount(int id)
{
	cout << " - ���¹�ȣ:" << g_account[id - BASE_ACCOUNT_ID].id
		<< ", �̸�:" << g_account[id - BASE_ACCOUNT_ID].name
		<< ", �ܰ�:" << g_account[id - BASE_ACCOUNT_ID].balance
		<< endl;
}
