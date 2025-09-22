/*Name - Mayank Yadav
  PRN - 24070123060
  Class - ENTC A3 */
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator-(const Complex& obj) const {
        return Complex(real - obj.real, imag - obj.imag);
    }

    void display() const {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(20, 15), c2(5, 7);
    Complex c3 = c1 - c2;

    cout << "Result of subtraction: ";
    c3.display();

    return 0;
}





/* OUTPUT
Result of subtraction: 15 + i8  */
