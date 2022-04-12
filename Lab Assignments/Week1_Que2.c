#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int A[1000];
        for (int j = 0; j < n; j++)
        {
            cin >> A[j];
        }
        int flag = 0, comp = 0, key;
        cin >> key;

        int mid, lower = 0, greater = n - 1;

        while (greater >= lower)
        {
            comp++;
            mid = lower + (greater - lower) / 2;

            if (A[mid] == key)
            {
                cout << "Present ";
                flag++;
                break;
            }
            else if (key > A[mid])
                lower = mid + 1;
            else
                greater = mid - 1;
        }

        if (flag == 0)
        {
            cout << "Not Present ";
        }
        cout << comp << endl;
    }
}
