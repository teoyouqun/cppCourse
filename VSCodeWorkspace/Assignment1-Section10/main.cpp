#include <iostream>
#include <string>

using namespace std;

int main() {

    string userInput {};
    cout << "Enter your preferred text for pyramid: ";
    getline(cin, userInput);
    
    size_t userInput_length = userInput.length();
    size_t count {0};
    for (; count < userInput_length; count++) {
        string currLineOutput {};
        size_t spacersLen = userInput_length - count - 1;
        string spacers(static_cast<int>(spacersLen), ' ');

        string lineText {};
        for (size_t index {0}; index < count + 1; index++) {
            lineText += userInput.at(index);
        }
        int pos = static_cast<int>(count - 1);
        for (; pos >= 0 ; pos--) {
            lineText += userInput.at(pos);
        }

        currLineOutput = spacers + lineText + spacers;
        cout << currLineOutput << endl;
    }

    return 0;
}