#include "StdAfx.h"
#include "Shape.h"
#define _USE_MATH_DEFINES
#include <cmath>

// CShape class
CShape::CShape(void)
{
}

CShape::~CShape(void)
{
}

void CShape::setCenterPosition(int x, int y)
{
	m_cx = x;
	m_cy = y;
}

void CShape::move(int dx, int dy)
{
	m_cx += dx;
	m_cy += dy;
}

void CShape::draw(CDC *dc)
{
}

double CShape::getArea()
{
	return .0;
}

double CShape::getPerimeter()
{
	return .0;
}

void CShape::setScale(double scale)
{
}

/////////////////////////////////////////////////
// CRectangle class
CRectangle::CRectangle(void)
{
}

CRectangle::~CRectangle(void)
{
}

CRectangle::CRectangle(int x, int y, int width, int height)
{
	setCenterPosition(x,y);
	init(width,height);
}

void CRectangle::init(int width, int height)
{
	m_width = width;
	m_height = height;
}

void CRectangle::draw(CDC *dc)
{
	dc->Rectangle(m_cx - m_width/2, m_cy - m_height/2, m_cx + m_width/2, m_cy + m_height/2);
}

double CRectangle::getArea()
{
	return (double)(m_width * m_height);
}

double CRectangle::getPerimeter()
{
	return (double)(m_width + m_height)*2;
}

void CRectangle::setScale(double scale)
{
	m_width = (int)((double)m_width * scale);
	m_height = (int)((double)m_height * scale);
}

/////////////////////////////////////////////////
// CSquare class
CSquare::CSquare(void)
{
}

CSquare::~CSquare(void)
{
}

CSquare::CSquare(int x, int y, int width)
{
	setCenterPosition(x,y);
	CRectangle::init(width,width);
}


/////////////////////////////////////////////////
// CCircle class
CCircle::CCircle(void)
{
}

CCircle::~CCircle(void)
{
}

CCircle::CCircle(int x, int y, int radius)
{
	setCenterPosition(x, y);
	init(radius);
}

void CCircle::init(int radius)
{
	m_radius = radius;
}

void CCircle::draw(CDC *dc)
{
	dc->Ellipse(m_cx-m_radius, m_cy-m_radius, m_cx+m_radius, m_cy+m_radius);
}

double CCircle::getArea()
{
	return (m_radius * m_radius * M_PI);
}

double CCircle::getPerimeter()
{
	return (2.0 * m_radius * M_PI);
}

void CCircle::setScale(double scale)
{
	m_radius = (int)((double)m_radius * scale);
}

/////////////////////////////////////////////////
// CTriangle class
CTriangle::CTriangle(void)
{
}

CTriangle::~CTriangle(void)
{
}

CTriangle::CTriangle(int x, int y, int width, int height)
{
	setCenterPosition(x,y);
	init(width,height);
}

void CTriangle::init(int width, int height)
{
	m_width = width;
	m_height = height;
}

void CTriangle::draw(CDC *dc)
{
	POINT pts[3] = { {m_cx, m_cy-m_height/2}, {m_cx + m_width/2, m_cy+m_height/2}, {m_cx - m_width/2, m_cy+m_height/2} };
	dc->Polygon(pts, 3);
}

double CTriangle::getArea()
{
	return (double)(m_width * m_height * 0.5);
}

double CTriangle::getPerimeter()
{
	return (std::sqrt(((double)m_height*m_height) + (m_width/2)*(m_width/2))*2 + m_width);
}

void CTriangle::setScale(double scale)
{
	m_width = (int)((double)m_width * scale);
	m_height = (int)((double)m_height * scale);
}
