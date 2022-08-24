#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Vector1: " << vector1.at(0) << " " << vector1.at(1) << " " << vector1.size() << endl;
    cout << "Vector2: " << vector2.at(0) << " " << vector2.at(1) << " " << vector2.size() << endl;
    
    vector <vector<int>> vector2d; 
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout << vector2d.at(0).at(0) << endl;
    vector1.at(0) = 500;
    cout << vector1.at(0) << endl;
    cout << vector2d.at(0).at(0) << endl;
    return 0;
}