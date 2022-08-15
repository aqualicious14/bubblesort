#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> test;
    int num;
    int non;
    cout << "How many numbers?: ";
    cin >> non;
    cout << "Enter the numbers: \n";
    for (int item = 0; item < non; item++) {
        cin >> num;
        test.push_back(num);
    }
    int n = test.size();
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (test[j] > test[j + 1]) {
                temp = test[j+1];
                test[j+1] = test[j];
                test[j] = temp;
            }
        }
    }
    cout << "Sorted numbers: \n";
    for (auto i = test.begin(); i != test.end(); i++) {
        cout << *i << "\n";
    }
    return 0;
}
