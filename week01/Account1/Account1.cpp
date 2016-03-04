// Account1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

const int NAME_LEN = 20;
const int MAX_ACCOUNT = 10;
const int BASE_ACCOUNT_ID = 1000;

struct Account
{
	int id;     // 계좌번호
	int balance;    // 잔액
	char name[NAME_LEN];    // 고객이름
};

// -------------------------------------------
//   인터페이를 위한 함수
// -------------------------------------------
void PrintMenu(); // 메뉴출력 
void MakeAccount(); // 계좌 개설을 위한 함수 
void Deposit(); // 입 금 
void Withdraw(); // 출 금 
void Remainder(); // 잔액 조회 


// -------------------------------------------
//   전역 변수
// -------------------------------------------
int g_menu;
Account g_account[MAX_ACCOUNT];
int g_cur_account = 0;

// -------------------------------------------
//   로컬 함수
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

// 메뉴출력 
void PrintMenu()
{
	cout << "=================" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체고객 잔액조회" << endl << endl;
	cout << "9. 종료" << endl;
	cout << "=================" << endl;
	cout << " 메뉴선택 : ";

	cin >> g_menu;
}

// 계좌 개설을 위한 함수
void MakeAccount()
{
	if (g_cur_account == MAX_ACCOUNT)
	{
		cout << "[더이상 계좌를 개설할 수 없습니다.]";
		return;
	}
	
	cout << "* 계좌개설을 위해서 다음 내용을 입력해 주세요." << endl;
	cout << " - 이름 : ";
	cin >> g_account[g_cur_account].name;
	cout << " - 초기 입금액 : ";
	cin >> g_account[g_cur_account].balance;

	g_account[g_cur_account].id = BASE_ACCOUNT_ID + g_cur_account;
	++g_cur_account;
	cout << "[계좌를 개설했습니다.]" << endl;
}

// 입 금 
void Deposit()
{
	int user_id, user_money;
	cout << "* 입금을 위해서 다음 내용을 입력해 주세요." << endl;
	cout << " - 계좌번호 : ";
	cin >> user_id;
	cout << " - 입금액 : ";
	cin >> user_money;
	
	if ((user_id < BASE_ACCOUNT_ID) || (user_id > BASE_ACCOUNT_ID + g_cur_account))
	{
		cout << "[계좌번호를 잘 못 입력했습니다. 확인 후 다시 시도해 주시기 바랍니다.]" << endl;
		return;
	}
	g_account[user_id - BASE_ACCOUNT_ID].balance += user_money;

	PrintAccount(user_id);
}

// 출 금 
void Withdraw()
{
	int user_id, user_money;
	cout << "* 출금을 위해서 다음 내용을 입력해 주세요." << endl;
	cout << " - 계좌번호 : ";
	cin >> user_id;
	cout << " - 출금액 : ";
	cin >> user_money;

	if ((user_id < BASE_ACCOUNT_ID) || (user_id > BASE_ACCOUNT_ID + g_cur_account))
	{
		cout << "[계좌번호를 잘 못 입력했습니다. 확인 후 다시 시도해 주시기 바랍니다.]" << endl;
		return;
	}
	g_account[user_id - BASE_ACCOUNT_ID].balance -= user_money;

	PrintAccount(user_id);
}

// 잔액 조회 
void Remainder()
{
	for (int i = 0; i < g_cur_account; ++i)
	{
		PrintAccount(BASE_ACCOUNT_ID + i);
	}
}

void PrintAccount(int id)
{
	cout << " - 계좌번호:" << g_account[id - BASE_ACCOUNT_ID].id
		<< ", 이름:" << g_account[id - BASE_ACCOUNT_ID].name
		<< ", 잔고:" << g_account[id - BASE_ACCOUNT_ID].balance
		<< endl;
}
