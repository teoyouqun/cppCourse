#include <vector>

using namespace std;

vector<int> use_array() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    int arr[10] {0};
    arr[0] = 100;
    arr[sizeof(arr)-1] = 1000;
    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}