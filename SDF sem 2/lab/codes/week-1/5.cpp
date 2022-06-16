#include <iostream>
#include <climits>
using namespace std;

int isPrime(int n)
{
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int binarySearch(int arr[], int size, int key, int begin)
{
    int s = begin;
    int e = size;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int prevIndex = 0;
    for (int i = 2; i < max; i++)
    {
        if (isPrime(i))
        {
            int temp = binarySearch(arr, n, i, prevIndex);
            if (temp==-1)
            {
                cout << i << endl;
                return 0;
            } else {
                prevIndex = temp;
            }
        }
    }
    cout << "All primes are present in array." << endl;
    return 0;
}
