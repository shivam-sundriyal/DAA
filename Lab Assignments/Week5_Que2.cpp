#include <iostream>
using namespace std;
void Quick_Sort(int[], int, int);

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
            cin >> A[j];

        Quick_Sort(A, 0, n - 1);
        for(int j=0;j<n;j++)
            cout<<A[j]<<" ";
        cout<<endl;

        int x = 0, y = n-1,sum;
        cout<<"Enter the sum : ";
        cin >> sum;
        for(int j=0;j<n;j++)
        {
            if(A[x] + A[y] == sum)
            {
                cout<<A[x]<<"+"<<A[y]<<"="<<sum;
                break;
            }
            else if(A[x] + A[y] > sum)
                y--;
            else if(A[x] + A[y] < sum)
                x++;
            else
                {
                    cout<<"No such pair";
                    break;
                }
            
        }
    }
}

void Quick_Sort(int a[], int lb, int ub)
{
    int i = lb, j = ub, key = a[lb];

    if (i > j)
        return;

    while (i < j)
    {
        while (key >= a[i] && i < j)
            i++;
        while (key < a[j])
            j--;
        if (i < j)
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[lb] = a[j];
    a[j] = key;

    Quick_Sort(a, lb, j - 1);
    Quick_Sort(a, j + 1, ub);
}
