#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int a[size], key;

    cout << "\nInput values of array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter value you want to search: ";
    cin >> key;

    bool found = linear_search(a, size, key);

    if (found)
    {
        cout << "Key found";
    }
    else
    {
        cout << "Key not found";
    }

    return 0;
}