#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> inits (5);
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels.at(0) << " " << inits.at(0) << endl;
    
    vector <vector<int>> matrix(2,vector<int>(3,5));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}