#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Figure
{
public:
	Figure()
	{
		cout << "Called Figure constructor" << "\n";
	}
};

class Line: public Figure
{
public:
	Line(pair<float, float> first, pair<float, float> second): Figure(), first(first), second(second)
	{
		cout << "Called Line constructor" << "\n";
	}
	pair<float, float> first, second;
	
};

class Circle : public Figure
{
public:
	Circle(pair<float, float> center, float radius) : Figure(), center(center), radius(radius)
	{
		cout << "Called Circle constructor" << "\n";
	}
	pair<float, float> center;
	float radius;

};

class Polyline : public Figure
{
public:
	Polyline(vector<pair<float, float>> points) : Figure(), points(points)
	{
		cout << "Called Polyline constructor" << "\n";
	}
	vector<pair<float, float>> points;

};

void main()
{
	Line* figure = new Line(make_pair(1, 2), make_pair(4, 8));
	cout << figure->first.first << "\n";
	int kek;
	cin >> kek;

}