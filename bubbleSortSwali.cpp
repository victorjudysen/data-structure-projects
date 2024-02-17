#include <iostream>
using namespace std;

//bubble sort function for ascending order
void bs_Ascend(int a[], int n)
{
    for (int i=0; i < n-1; ++i)
    {
        for (int j=0; j < n - i - 1; ++j)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}
//bubble sort function for descending order
void bs_Descend(int a[], int n)
{
    for (int i=0; i < n-1; ++i)
    {
        for (int j=0; j < n-i-1; ++j)
        {
            if (a[j] < a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}

//printing array
void printout(int a[], int n)
{
    for(int i=0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {6, 2, 11, 7, 5, 8};
    int n = sizeof(a) / sizeof(a[0]);

    //sorting in ascending order
    bs_Ascend(a, n);
    cout << "Ascending Order: ";
    printout(a, n);

    bs_Descend(a, n);
    cout << "Descending Order: ";
    printout(a, n);

    return 0;
}