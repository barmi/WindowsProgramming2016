/** Structure2.cpp **/

#include <iostream>
using namespace std;


//사원을 위한 구조체
struct Employee
{
	char name[10]; /* 이름 */
	char personID[20]; /* 주민등록번호 */
	char address[30]; /* 주소 */
	int salary; /* 월 급여액 */
}; 

void setAddress(Employee &emp, char* _address) // 주소를 수정한다.
{
	strcpy(emp.address, _address);
}

void setSalary(Employee &emp, int _salary) // 급여액을 수정한다.
{
	emp.salary = _salary;
}

void display(Employee &emp) // 콘솔화면에 사원정보를 출력한다.
{
	cout << emp.name << ", " << emp.personID << ", " << 
		emp.address << ", " << emp.salary << "만원" << endl;
}


int main()
{
	Employee Hong={"홍길동", "700815", "충남천안시", 500};
	Employee Park={"박찬호", "680121","서울시",1000};

	display(Hong);
	display(Park);

	setAddress(Hong,"서울시강남구"); // 홍길동 사원의 주소 변경
	setSalary(Park,200); // 박찬호 사원의 급여 변경

	display(Hong);
	display(Park);

	system("pause");
	return 0;
}
