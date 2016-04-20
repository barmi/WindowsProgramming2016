#pragma once

class CShape
{
protected:
	int m_cx;
	int m_cy;
public:
	CShape(void);
	~CShape(void);
	void setCenterPosition(int x, int y);
	void move(int dx, int dy);
	virtual void draw(CDC *dc);
	virtual double getArea();
	virtual double getPerimeter();
	virtual void setScale(double scale);
};

class CRectangle : public CShape
{
protected:
	int m_width;
	int m_height;
public:
	CRectangle(void);
	~CRectangle(void);
	CRectangle(int x, int y, int width, int height);
	void init(int width, int height);
	virtual void draw(CDC *dc);
	virtual double getArea();
	virtual double getPerimeter();
	virtual void setScale(double scale);
};

class CSquare : public CRectangle
{
public:
	CSquare(void);
	~CSquare(void);
	CSquare(int x, int y, int width);
	//void init(int width, int height);
	//virtual void draw(CDC *dc);
	//virtual double getArea();
};

class CCircle : public CShape
{
protected:
	int m_radius;
public:
	CCircle(void);
	~CCircle(void);
	CCircle(int x, int y, int radius);
	void init(int raius);
	virtual void draw(CDC *dc);
	virtual double getArea();
	virtual double getPerimeter();
	virtual void setScale(double scale);
};

class CTriangle : public CShape
{
protected:
	int m_width;
	int m_height;
public:
	CTriangle(void);
	~CTriangle(void);
	CTriangle(int x, int y, int width, int height);
	void init(int width, int height);
	virtual void draw(CDC *dc);
	virtual double getArea();
	virtual double getPerimeter();
	virtual void setScale(double scale);
};
