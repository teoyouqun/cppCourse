#include <iostream>

using namespace std;

int main() {
    
    int noOfCents {0};
    cout << "Enter how much cents you have: ";
    cin >> noOfCents;
    
    int dollars {0}, quarters {0}, dimes {0}, nickels {0}, pennies {0};
    dollars = noOfCents / 100;
    if (dollars) noOfCents -= dollars * 100;
    quarters = noOfCents / 25;
    if (quarters) noOfCents -= quarters * 25;
    dimes = noOfCents / 10;
    if (dimes) noOfCents -= dimes * 10;
    nickels = noOfCents / 5;
    if (nickels) noOfCents -= nickels * 5;
    pennies = noOfCents;

    cout << "You can provide change as follows:" << endl;
    cout << "Dollars: " << dollars << "\nQuarters: " << quarters << "\nDimes: " << dimes << "\nNickels: " << nickels << "\nPennies: " << pennies << endl;
    return 0;
}