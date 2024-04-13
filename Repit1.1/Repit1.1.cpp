#include <iostream>
#include <string>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point() {
		cout << "create obj class Point" << endl;
	}
	~Point() {
		cout << "destroy obj class Point" << endl;
		
	}
	int getx() { return x; }
	void setx(int qwe) {
		
		x = qwe;
	}
	int gety() { return y; }
	void sety(int wer) {
		
		y = wer;
	}
};

int main()
{
	Point A;
	int x_val;
	int y_val;
	cout << "Coordinates" << endl;
	cout << "X..." << endl;
	cin >> x_val;
	cout << "Y...";
	cin >> y_val;
	A.setx(x_val);
	A.sety(y_val);
	cout << "coordinates point A: ("<< A.getx() <<";" << A.gety()<< ")" << endl;
	 
}
