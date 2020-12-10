// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers
// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

#include <iostream>

using namespace std;

int main() {
    int num, sum;
    sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int count = 1; count <= num; ++count) {
        sum += count;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
