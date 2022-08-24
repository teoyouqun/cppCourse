#include <iostream>

using namespace std;

int main() {
    char vowels[] {'a','e','i','o','u'};
    for (int i = 0; i < (int)sizeof(vowels); i++) {
        cout << vowels[i] << endl;
    }
    return 0;
}