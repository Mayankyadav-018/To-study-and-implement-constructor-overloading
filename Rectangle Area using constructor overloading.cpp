/*Name - Mayank Yadav
  PRN - 24070123060
  Class - ENTC A3 */
#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(int length, int width) {
        cout << "Area: " << (length * width) << endl;
    }

    Rectangle(float length, float width) {
        cout << "Perimeter: " << (2 * (length + width)) << endl;
    }

    Rectangle(double length, double width) {
        if (length == width)
            cout << "This is a Square" << endl;
        else
            cout << "This is a Rectangle" << endl;
    }
};

int main() {
    cout << "Integer inputs (Area calculation):" << endl;
    Rectangle r1(10, 5);

    cout << "\nFloat inputs (Perimeter calculation):" << endl;
    Rectangle r2(10.5f, 5.5f);

    cout << "\nDouble inputs (Shape check):" << endl;
    Rectangle r3(6.0, 6.0);

    return 0;
}





/* OUTPUT
Integer inputs (Area calculation):
Area: 50

Float inputs (Perimeter calculation):
Perimeter: 32

Double inputs (Shape check):
This is a Square  */
