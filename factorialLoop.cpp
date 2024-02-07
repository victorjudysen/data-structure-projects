// to show how 4! = 4*3*2*1 = 24 using for loop
#include <iostream>
using namespace std;

int factorial_loop(int n) 
{
    int result = 1;
    for (int i=2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    // Calculate and print the factorial of 4
    int factorial = factorial_loop(4);
    cout << "Factorial of 4 using loop: " << factorial << endl;
    return 0;
}

