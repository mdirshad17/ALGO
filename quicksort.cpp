#include<bits/stdc++.h>
using namespace std;

int partition(int * a, int low, int high)
{
    int pivot = a[high];
    int j;
    int i = low - 1;
    for (j = low; j <= high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);

        }
    } swap(a[i + 1], a[high]);
    return i + 1;
}
void quicksort(int * a, int low, int high)
{
    if (low < high) {
        int pi = partition(a, low, high);
        quicksort(a, low, pi - 1);
        quicksort(a, pi, high);
    }
}
int main()
{

    int a[] = {2, 7, 3, 4, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}