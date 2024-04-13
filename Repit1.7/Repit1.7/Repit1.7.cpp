#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    double x;
    double y;
    double z;

public:
    Vector() {
        x = 0;
        y = 0;
        z = 0;
    }

    Vector(double x_val, double y_val, double z_val) {
        x = x_val;
        y = y_val;
        z = z_val;
    }

    
    ~Vector() {}

   
    double length() {
        return sqrt(x * x + y * y + z * z);
    }

    
    double dotProduct(Vector v) {
        return x * v.x + y * v.y + z * v.z;
    }
};

int main() {

    Vector v1;
    cout << "Vector v1: (" << v1.length() << ")" << endl;

   
    Vector v2(1, 2, 3);
    cout << "Vector v2: (" << v2.length() << ")" << endl;

    
    Vector v3(2, 3, 4);

    
    cout << "Dot product of v2 and v3: " << v2.dotProduct(v3) << endl;

    return 0;
}
