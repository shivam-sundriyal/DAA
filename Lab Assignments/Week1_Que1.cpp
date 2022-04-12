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

        for (int k = 0; k < n; k++)
        {
            comp++;
            if (A[k] == key)
            {
                flag++;
                cout << "Present ";
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Not present ";
        }
        cout << comp << endl;
    }
}
