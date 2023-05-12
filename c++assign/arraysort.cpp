#include <algorithm>
#include <iostream>
using namespace std;

template<class t>
void srt(t a[], int array_size)
{
    for (int i = 0; i < array_size; i++)
        cout << a[i] << " ";

    cout << "The array before sorting: \n";

    sort(a, a + array_size);

    for (int i = 0; i < array_size; i++)
        cout << a[i] << " ";

    cout << "The array after sorting: \n";
}

int main()
{
    int a[] = {5, 7, 9, 4, 8, 0, 2, 1, 3, 6};
    int array_size = sizeof(a) / sizeof(a[0]);

    srt(a, array_size);

    return 0;
}
