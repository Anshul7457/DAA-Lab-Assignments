#include <iostream>
using namespace std;

void binary_search()
{
    int N, key;
    cout << "Enter the number on elements :" << endl;
    cin >> N;
    int *arr = (int *)malloc(sizeof(int) * N);
    cout << "Enter the elements in array :" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search :" << endl;
    cin >> key;
    int mid = 0, first = 0, last = N, flag = 0;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << "Element Found At Index : " << mid << endl;
    }
    else
    {
        cout << "Element Not found" << endl;
    }
}

int main()
{
    int t;
    cout << "Enter the number of test cases" << endl;
    cin >> t;
    while (t--)
    {
        binary_search();
    }
}
