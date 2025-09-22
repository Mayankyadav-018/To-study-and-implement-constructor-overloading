/*Name - Mayank Yadav
  PRN - 24070123060
  Class - ENTC A3 */

#include <iostream>
using namespace std;

class Calc {
    int value;

public:
    Calc(int v = 0) : value(v) {}

    Calc operator+(const Calc& other) const {
        return Calc(value + other.value);
    }

    Calc operator-(const Calc& other) const {
        return Calc(value - other.value);
    }

    Calc operator*(const Calc& other) const {
        return Calc(value * other.value);
    }

    Calc operator/(const Calc& other) const {
        if (other.value == 0) {
            cout << "Error: Division by zero!" << endl;
            return Calc(0);
        }
        return Calc(value / other.value);
    }

    void show(const string& label) const {
        cout << label << value << endl;
    }
};

int main() {
    Calc a(20), b(4);

    Calc sum   = a + b;
    Calc diff  = a - b;
    Calc prod  = a * b;
    Calc quot  = a / b;

    cout << "\nResults:\n";
    sum.show("Sum: ");
    diff.show("Difference: ");
    prod.show("Product: ");
    quot.show("Quotient: ");

    return 0;
}





/* OUTPUT
Results:
Sum: 24
Difference: 16
Product: 80
Quotient: 5  */
