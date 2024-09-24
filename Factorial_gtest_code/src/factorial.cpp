// #include <iostream>

// // Recursive function to compute the factorial
// unsigned long long factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int num = 10; // You can change this to any positive integer
//     std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
//     return 0;
// }

#include "factorial.h"

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}