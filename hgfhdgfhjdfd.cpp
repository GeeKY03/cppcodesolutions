#include <iostream>
#include <vector>
using namespace std;

const int MAX_DIGITS = 9; // Assuming a maximum of 10 digits for self-descriptive numbers

bool isSelfDescriptive(const string& num) {
    vector<int> count(10, 0);
    for (char c : num) {
        int digit = c - '0';
        count[digit]++;
    }
    for (int i = 0; i < num.size(); i++) {
        int digit = num[i] - '0';
        if (count[i] != digit) {
            return false;
        }
    }
    return true;
}

void generateSelfDescriptiveNumbers(string currentNum, int length) {
    if (currentNum.size() == length) {
        long long int num = stoll(currentNum);
        if (num < 2 * 1000000000LL && isSelfDescriptive(currentNum)) {
            cout << currentNum << endl;
        }
        return;
    }

    for (int digit = 0; digit <= currentNum.size(); digit++) {
        generateSelfDescriptiveNumbers(currentNum + to_string(digit), length);
    }
}

void findAllSelfDescriptiveNumbers(int maxDigits) {
    for (int length = 1; length <= maxDigits; length++) {
        generateSelfDescriptiveNumbers("", length);
    }
}

int main() {
    int maxDigits = 10; // Change this to the desired number of digits
    findAllSelfDescriptiveNumbers(maxDigits);
    return 0;
}
