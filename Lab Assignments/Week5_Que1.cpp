#include <iostream>
using namespace std;

void countSort(char[], int);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        char arr[1000];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        countSort(arr, n);
    }
}

void countSort(char arr[], int n)
{
    int count[26] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i] - 97]++;
    int max = 0;
    char res = '$';
    for (int i = 0; i < n; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            res = i + 97;
        }
    }

    if (max == 1)
        cout << "No duplicate found" << endl;
    else
        cout << res << " - " << max << endl;
}
