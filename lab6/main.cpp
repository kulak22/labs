#include <iostream>

using namespace std;

class Line {
public:
	virtual	int length()=0;
};
class  Segment : public Line {
	int length() {
		int x1, x2, y1, y2;
		cout << "Введите координаты первой точки отрезка " << endl;
		cout << "X = ";
		cin >> x1;
		cout << "Y = ";
		cin >> y1;
		cout << "Введите координаты второй точки отрезка " << endl;
		cout << "X = ";
		cin >> x2;
		cout << "Y = ";
		cin >> y2;
		cout << "Длина отрезка = ";
		return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	}
};
class  Polyline : public Line {
	int length() {
		int x1, x2, x3, y1, y2, y3;
		cout << "Введите координаты первой точки ломаной " << endl;
		cout << "X = ";
		cin >> x1;
		cout << "Y = ";
		cin >> y1;
		cout << "Введите координаты второй точки ломаной " << endl;
		cout << "X = ";
		cin >> x2;
		cout << "Y = ";
		cin >> y2;
		cout << "Введите координаты третьей точки ломаной " << endl;
		cout << "X = ";
		cin >> x3;
		cout << "Y = ";
		cin >> y3;
		cout << "Длина ломаной = ";
		return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Line* line;
	Segment segment;
	Polyline polyline;
	line = &segment;
	cout << line->length() << endl;
	line = &polyline;
	cout << line->length() << endl;

	return 0;
}
