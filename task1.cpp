// Task 1

// Calulate factorials and display them.

#include <iostream>
using namespace std;

unsigned long fractorial (unsigned long n) {
    if (n > 1) {
        return n * fractorial(n-1);
    }
    else {
        return 1;
    }
}

void display (int n) {
    if (n < 1) {
        return;
    }
    display(n-1);
    for (int i=0; i< n; i++) {
        cout << fractorial(i+1) << " ";
    }
    cout << endl;
}

int main () {
    display(10);
    return 0;
}