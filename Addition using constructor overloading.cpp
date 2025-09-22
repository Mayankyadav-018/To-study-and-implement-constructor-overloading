/*Name - Mayank Yadav
  PRN - 24070123060
  Class - ENTC A3 */
#include <iostream>
using namespace std;

class Sum {
public:
    
    Sum(int x, int y) {
        cout << "Integer Sum (2 numbers): " << (x + y) << endl;
    }

    Sum(float x, float y) {
        cout << "Float Sum (2 numbers): " << (x + y) << endl;
    }

    Sum(int x, int y, int z) {
        cout << "Integer Sum (3 numbers): " << (x + y + z) << endl;
    }
};

int main() {
    int a, b, c;
    float p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter two floating-point numbers: ";
    cin >> p >> q;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "\nResults:\n";

    Sum s1(a, b);    
    Sum s2(p, q);    
    Sum s3(a, b, c); 

    return 0;
}



/* OUTPUT
Enter two integers: 5 8
Enter two floating-point numbers: 2.9 5.3
Enter three integers: 3 7 9

Results:
Integer Sum (2 numbers): 10
Float Sum (2 numbers): 8.2
Integer Sum (3 numbers): 19  */
