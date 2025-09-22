/*Name - Mayank Yadav
  PRN - 24070123060
  Class - ENTC A3 */
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    int intResult = calc.add(5, 10);
    double floatResult = calc.add(5.5, 2.5);

    cout << "Integer Sum: " << intResult << endl;
    cout << "Floating-point Sum: " << floatResult << endl;

    return 0;
}



/* OUTPUT
Integer Sum: 15
Floating-point Sum: 8  */
