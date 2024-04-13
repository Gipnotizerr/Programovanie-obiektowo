#include <iostream>
#include <string>
using namespace std;

class Rectagngle {
private:
    int a;
    int b;
public:
	Rectagngle() {
		cout << "create obj class Point" << endl;
	}
	~Rectagngle() {
		cout << "destroy obj class Point" << endl;

	}
	int getx() { return a; }
	void setx(int qwe) {

		a = qwe;
	}
	int gety() { return b; }
	void sety(int wer) {

		b = wer;
	}
	void square() { cout << "Square = a*b = " << a*b << endl; }
	void perimeter() { cout << "Perimeter = 2(a+b) = "<< (a+b)*2 << endl; }
};
int main()
{
	Rectagngle A;
	int a_val;
	int b_val;
	cout << "Side lengths" << endl;
	cout << "A..." << endl;
	cin >> a_val;
	cout << "B...";
	cin >> b_val;
	A.setx(a_val);
	A.sety(b_val);
	cout << "Side lengths A: (" << A.getx() << ";" << A.gety() << ")" << endl;
	A.square();
	A.perimeter();
	return 0;
    
}

