#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[1000], n = 0, num;
    while (cin >> num)
    {
        if (n < 1000)
        {
            arr[n++] = num;
        }
        else
        {
            cout << "None" << endl;
            break;
        }
    }
    int kq = big2(arr, n);
    if (kq == -1)
    {
        cout << "None" << endl;
    }
    else
    {
        cout << kq << endl;
    }
    return 0;
}