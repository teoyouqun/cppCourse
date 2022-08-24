#include <iostream>

using namespace std;
/* Mixed Type Expressions
 * Type Coercion = automatic conversion of one operand data type to another
 *   - Promotion: convert to a higher type (e.g. int to double)
 *      e.g. 2 * 5.2 --> 2.0 * 5.2 (2 is promoted to 2.0)
 *   - Demotion: convert to a lower type (e.g. double to long)
 *      e.g. int num {0}; num = 100.2; --> num = 100 (100.2 is demoted to 100)
 */


int main() {
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces:" << endl;
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    double average {0.0}, typecast_average {0.0};
    average = total/count;
    typecast_average = static_cast<double>(total)/count;
    // In C average = (double) total/count but this style is less restrictive, static_cast will help to check if conversion is possible
    cout << "Sum of three numbers: " << num1 << ", " << num2 << ", " << num3 << " is " << total << endl;
    cout << "Average of the numbers is: " << average << endl;
    cout << "Typecasted average of the numbers is: " << typecast_average << endl;
    return 0;
}