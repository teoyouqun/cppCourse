#include <iostream>

using namespace std;

int main() {
    enum Tribe {Murlocs, Demons};
    Tribe currTribe {Murlocs};
    switch (currTribe) {
        case Murlocs:
            cout << "Murlocs" << endl;
        case Demons:
            cout << "Demons" << endl;
    }

    return 0;
}