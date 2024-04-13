#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;

class Circle {
private:
	int R;
public:
	Circle() {
		cout << "create obj class Point" << endl;
	}
	~Circle() {
		cout << "destroy obj class Point" << endl;

	}
	int getx() { return R; }
	void setx(int qwe) {

		R = qwe;
	}
	
	void square() { cout << "Square = π*R*R  = " << R*PI * R << endl; }
	void perimeter() { cout << "Perimeter = 2*π*R = " << PI*R * 2 << endl; }
};
int main()
{
	Circle A;
	int r_val;
	
	cout << "Side lengths" << endl;
	cout << "R..." << endl;
	cin >> r_val;
	A.setx(r_val);
	
	cout << "Radius A: (" << A.getx() << ")" << endl;
	A.square();
	A.perimeter();
	return 0;

}