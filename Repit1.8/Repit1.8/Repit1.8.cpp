#include <iostream>
#include <string>
using namespace std;

class Rectangle {
protected:
    int length;
    int width;

public:
    Rectangle() {
        cout << "create obj class Rectangle" << endl;
    }

    ~Rectangle() {
        cout << "destroy obj class Rectangle" << endl;
    }

    
    int getLength() { return length; }
    int getWidth() { return width; }

    void setLength(int len) {
        if (len > 0)
            length = len;
        else
            cout << "Invalid length. Length must be a positive integer." << endl;
    }

    void setWidth(int wid) {
        if (wid > 0)
            width = wid;
        else
            cout << "Invalid width. Width must be a positive integer." << endl;
    }

    
    void square() {
        cout << "Square = length * width = " << length * width << endl;
    }

    void perimeter() {
        cout << "Perimeter = 2 * (length + width) = " << 2 * (length + width) << endl;
    }
};

int main() {
    Rectangle A;
    int length_val;
    int width_val;

    cout << "Enter side lengths" << endl;
    cout << "Length: ";
    cin >> length_val;
    cout << "Width: ";
    cin >> width_val;

    A.setLength(length_val);
    A.setWidth(width_val);

    cout << "Side lengths A: (" << A.getLength() << ", " << A.getWidth() << ")" << endl;
    A.square();
    A.perimeter();

    return 0;
}
