// first negative in each window
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int negIdx = -1;
    int k = 4;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            negIdx = i;
            break;
        }
    }
    int ans[n - k + 1];
    ans[0] = arr[negIdx];
    int i = 1, j = k;
    while (j < n)
    {
        if (negIdx >= i)
            ans[i] = arr[negIdx];
        else
        {
            for (negIdx = i; negIdx <= j; negIdx++)
            {
                if (arr[negIdx] < 0)
                    break;
            }
            ans[i] = arr[negIdx];
        }
        i++;
        j++;
    }
    for (int i = 0; i < n - k + 1; i++)
        cout << ans[i] << " ";
}