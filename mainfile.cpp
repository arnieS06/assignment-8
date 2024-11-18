#include <iostream>
using namespace std;

// this function is the answer
// to the class question
// that asks us to change data types
// so that the output is a double
int main() {
    int x = 10;
    double y = 3; // changed this int variable to a double

    double z = static_cast<double>(x) / y;

    cout << z;  // Output the result
    return 0;
}
