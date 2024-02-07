// to show 4! = 4*3*2*1 = 24 using recursive function

#include <iostream>
using namespace std;

// function to calculate factorial recursively
int factorial_recursive(int n) 
{
    if (n == 0)
    {
        return 1;
    }
    //Recursive case: Return n times the factorial of n-1
    else {
        return n * factorial_recursive(n-1);
    }
}

int main()
{
    //Calculate and print the factorial of 4
    int factorial = factorial_recursive(4);

    cout << "Factorial of 4 using recursion: " << factorial << endl;

    return 0;
}
