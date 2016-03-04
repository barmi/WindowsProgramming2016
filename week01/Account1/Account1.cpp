// Account1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

const int NAME_LEN = 20;
const int MAX_ACCOUNT = 10;

struct Account
{
	int id;     // 계좌번호
	int balance;    // 잔액
	char name[NAME_LEN];    // 고객이름
};

void PrintMenu(); // 메뉴출력 
void MakeAccount(); // 계좌 개설을 위한 함수 
void Deposit(); // 입 금 
void Withdraw(); // 출 금 
void Remainder(); // 잔액 조회 

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

}

// 입 금 
void Deposit()
{
}

// 출 금 
void Withdraw()
{
}

// 잔액 조회 
void Remainder()
{
}
