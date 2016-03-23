// Shape.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


class CShape {
protected:
	int _x, _y; // �߽����� ��ġ
public:
	CShape() {}
	CShape(int x, int y) : _x(x), _y(y) {}
	~CShape() {}
	virtual void draw() = 0;
};

class CRectangle : public CShape {
private:
	int _width, _height;
public:
	CRectangle() {}
	CRectangle(int x, int y, int w, int h) : CShape(x, y), _width(w), _height(h) {}
	~CRectangle() {}
	void draw() {}
};

class CCircle : public CShape {
private:
	int _radius;
public:
	CCircle() {}
	CCircle(int x, int y, int r) : CShape(x, y), _radius(r) {}
	~CCircle() {}
	void draw() {}
};

int main()
{
	CShape *shape1 = new CRectangle(100, 100, 60, 40);
	CShape *shape2 = new CCircle(100, 100, 30);

	shape1->draw();
	shape2->draw();

	delete shape1;
	delete shape2;

    return 0;
}

