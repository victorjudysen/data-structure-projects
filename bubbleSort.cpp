//Bubble Sort Algorithm

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {100, 3, 1, 7, 80};
    int temp;

    for (int m=0; m<5; m++)
    {
        for (int n=0; n<5; n++)
        {
            if(arr[n] > arr[n+1])
            {
                temp = arr[n];
                arr[n] = arr[n+1];
                arr[n+1] = temp;
            }
        }
    }

    for (int v=0; v<5; v++) 
    {
        cout << arr[v] << endl;
    }

    return 0;
}
