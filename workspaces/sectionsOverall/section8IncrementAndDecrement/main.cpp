#include <iostream>
#include <vector>

using namespace std;

int main() {
    int counter {10}, result {0};
    /* Example 1
     * Prefix Operator ++num
     * Postfix Operator num++
     * Never use it twice for the same variable in the same statement
     */    
    counter++;
    cout << "Counter Value: " << counter << endl;
    
    ++counter;
    cout << "Counter Value: " << counter << endl;
    
    /* Example 2
     * Preincrement - increase before it's used
     */    
    cout << "Preincrement" << endl;
    counter = 10;
    result = 0;
    result = ++counter; //counter = counter + 1, result = counter
    cout << "Counter Value: " << counter << endl;
    cout << "Result Value: " << result << endl;
    
    /* Example 3
     * Postincrement - increase after it's used
     */
    cout << "Postincrement" << endl;
    counter = 10;
    result = 0;
    result = counter++; //result = counter, counter = counter + 1
    cout << "Counter Value: " << counter << endl;
    cout << "Result Value: " << result << endl;
    return 0;
}