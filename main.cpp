
#include <iostream>
using namespace std;

int compute1(int n) {
    if (n < 0)                                 // basic case for n<0, return 20 if n is negative
    {
        return 20;
    }
    else if ( n>=0 && n<=10 )                  // Recursive case for 0 <= n <= 10
    {
        return compute1(n - 1) + (5 * n);
    }
    else                                       // Recursive case for n > 10
    {
        return compute1(n - 2) + (3 * n);
    }
}

int main() {
    char choice;
    do {
        int num;
        cout << "Enter a value for n: ";     // Prompt the user to enter a value for n
        cin >> num;

        int result = compute1(num);
        cout << "compute1(" << num << ") = " << result << endl;       // Display the result

        cout << "Do you want to compute for another value? (y/n): ";  // Prompt the user to continue
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');                         // Check if the user wants to continue
    
    return 0;
}
