// MidEx1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void displayMenu(void)
{
	cout << "===================" << endl;
	cout << "1. 삼각형 그리기" << endl;
	cout << "2. 사각형 그리기" << endl;
	cout << endl;
	cout << "0. 종료" << endl;
	cout << "===================" << endl;
	cout << "선택하세요 : ";
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
			cout << "삼각형, 높이 : ";
			cin >> height;
			printTriangle(height);
			break;
		case 2:
			cout << "사각형, 높이 : ";
			cin >> height;
			printSquare(height);
			break;
		case 0:
			break;
		default:
			cout << "잘못입력하셨습니다. 다시 입력하세요." << endl;
			break;
		}
	} while (menu != 0);
	return 0;
}

