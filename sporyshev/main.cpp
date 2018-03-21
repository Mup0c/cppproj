#include <utility>
#include <iostream>
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
	Line(pair<int, int> first, pair<int, int> second): Figure(), first(first), second(second)
	{
		cout << "Called Line constructor" << "\n";
	}
	pair<int, int> first, second;

};

void main()
{
	Line* figure = new Line(make_pair(1, 2), make_pair(4, 8));
	cout << figure->first.first << "\n";
	int kek;
	cin >> kek;

	Line figure1 = Line(make_pair(1, 2), make_pair(4, 8));
	cout << figure1.first.first << "\n";
	int kek1;
	cin >> kek1;

}