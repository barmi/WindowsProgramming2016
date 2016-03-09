#include <iostream>

using namespace std;

class myclass
{
	int i,j;
public:
	/*
	myclass() {}

	myclass(int a, int b)
	{
		i = a;
		j = b;
	}
	*/
	void display() {
		cout << i << ' ' << j << endl;
	}
};

int main()
{
	//myclass a1(10,20);
	//a1.display();
	myclass a2;
	a2.display();

	return 0;
}
