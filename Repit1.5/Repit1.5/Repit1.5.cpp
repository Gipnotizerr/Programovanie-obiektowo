
#include <iostream>
#include <string>;
using namespace std;

class Time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time() {
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	Time(int h, int m, int s) {
		hours = h;
		minutes = m;
		seconds = s;

	}
	int getHours() {
		return hours;
	}

	void setHours(int h) {
		hours = h;
	}
	int getMinutes() {
		return minutes;
	}

	void setMinutes(int m) {
		minutes = m;
	}
	int getSeconds() {
		return seconds;
	}

	void setSeconds(int s) {
		seconds = s;
	}
};
int main()
{
	Time A;
	cout << "Time with default values ->" << endl;
	cout << "Hours: " << A.getHours() << " Minutes: " << A.getMinutes() << " Seconds: " << A.getSeconds() << endl;
	Time B(6, 32, 43);
	cout << "Time with exlusive values ->" << endl;
	cout << "Hours: " << B.getHours() << " Minutes: " << B.getMinutes() << " Seconds: " << B.getSeconds() << endl;
	return 0;
}
