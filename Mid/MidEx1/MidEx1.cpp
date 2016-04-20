// MidEx1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void displayMenu(void)
{
	cout << "===================" << endl;
	cout << "1. �ﰢ�� �׸���" << endl;
	cout << "2. �簢�� �׸���" << endl;
	cout << endl;
	cout << "0. ����" << endl;
	cout << "===================" << endl;
	cout << "�����ϼ��� : ";
}

void printTriangle(int height)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 0; j < height - i; j++)
			cout << " ";
		for (int j = 0; j < i*2-1; j++)
			cout << "*";
		cout << endl;
	}
}

void printSquare(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height; j++)
			cout << "*";
		cout << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int menu;
	do
	{
		displayMenu();
		cin >> menu;
		int height;
		switch (menu)
		{
		case 1:
			cout << "�ﰢ��, ���� : ";
			cin >> height;
			printTriangle(height);
			break;
		case 2:
			cout << "�簢��, ���� : ";
			cin >> height;
			printSquare(height);
			break;
		case 0:
			break;
		default:
			cout << "�߸��Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���." << endl;
			break;
		}
	} while (menu != 0);
	return 0;
}

