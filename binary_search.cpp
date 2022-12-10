#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
        int start = 0, end = size - 1;
        int mid = (start + end) / 2;

        while (start <= end)
        {
                if (arr[mid] == key)
                {
                        return mid;
                }
                if (key > arr[mid])
                {
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }
                mid = (start + end) / 2;
        }
        return -1;
}
int main()
{
        int size, key;

        cout << "Enter size of array: ";
        cin >> size;

        int A[size];

        for (int i = 0; i < size; i++)
        {
                cin >> A[i];
        }
        cout << "Enter key: ";
        cin >> key;

        int index = binary_search(A, size, key);
        cout << "Found at index is : " << index;

        return 0;
}