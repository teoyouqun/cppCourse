#include <iostream>

using namespace std;

int main() {
    // Make outputs true and false instead of 1 and 0;
    bool boolTest {false};
    cout << boolTest << endl;
    cout << std::boolalpha;
    cout << boolTest << endl;
    cout << std::noboolalpha;
    
    /* Short-Circuit Evaluation
     * expr1 && expr2 && expr3 - will stop evaluating if expr1 or any subsequent is false
     * expr1 || expr2 || expr3 - will stop evaluating if expr1 or any subsequent is true
     */
     
    /* Compound Assignments
     * += -= /= *=
     * a *= b+c == a = a * (b+c)
     * %= modulo
     * >>= <<= bitwise
     * &= ^= |= bitand bitxor bitor
     */ 
     
    return 0;
}