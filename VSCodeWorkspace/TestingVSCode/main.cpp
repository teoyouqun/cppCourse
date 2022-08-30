#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
    enum Tribe {Murlocs, Demons};
    Tribe currTribe {Murlocs};
    switch (currTribe) {
        case Murlocs:
            cout << "Murlocs" << endl;
        case Demons:
            cout << "Demons" << endl;
    }
    */
    vector<int> vec {1,2,4,3};
    int count {0};
    unsigned i {0};
    bool flag {true};
    while (flag) {
        if (vec[i] == -99 || i == vec.size() -1) flag = false;
        else {
            i++;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}