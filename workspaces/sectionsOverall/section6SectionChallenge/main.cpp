#include <iostream>
#include <climits> //for things like MAX_INT;

using namespace std;

int main() {
    cout << "Frank's Room Cleaning Service" << endl;
    
    int noOfSmallRooms {0}, noOfLargeRooms {0};
    cout << "How many small rooms would you like to clean: ";
    cin >> noOfSmallRooms;
    cout << "How many large rooms would you like to clean: ";
    cin >> noOfLargeRooms;
    
    const double pricePerSmallRoom {25}, pricePerLargeRoom {35};
    const double salesTax {0.06};
    const int estimateExpiry {30};
    
    cout << "Estimate for room cleaning service:" << endl;
    cout << "Number of large and small rooms: " << noOfLargeRooms << " & " << noOfSmallRooms << endl;
    cout << "Price per large and small rooms: $" << pricePerLargeRoom << " & $" << pricePerSmallRoom << endl;
    double cost = pricePerLargeRoom * noOfLargeRooms + pricePerSmallRoom * noOfSmallRooms;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << cost * salesTax << endl;
    cout << "Total Estimate: $" << cost * (1+salesTax) << endl;
    cout << "Valid for " << estimateExpiry << " days." << endl;    
    return 0;
    
}