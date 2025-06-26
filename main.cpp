#include <iostream>
using namespace std;

// ullz
void quicksort(int arr[], int i, int j)
{
    if (i >= j)
    {
        return;
    }
    int val = arr[i];
    int l = i;
    int r = j;
    while (l < r)
    {
        while (l < r && arr[r] > val)
        {
            r--;
        }
        if (l < r)
        {
            swap(arr[l++], arr[r]);
        }
        while (l < r && arr[l] <= val)
        {
            l++;
        }
        if (l < r)
        {
            swap(arr[r--], arr[l]);
        }
    }
    quicksort(arr, i, l - 1);
    quicksort(arr, l + 1, j);
}

void sort(int *arr, int size)
{
    quicksort(arr, 0, size - 1);
}

int main()
{
    /// llz1
    int arr[] = {12, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}
