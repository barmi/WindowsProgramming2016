// Structure1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

struct Student {
	// Student 라는 이름의 사용자 정의 자료형
	char name[10]; // 이름
	char address[20]; // 주소
	int Year; // 학년

};

int main()
{
	int a = 10;
	Student s; // struct Student s;

	system("pause");
	return 0;
}
