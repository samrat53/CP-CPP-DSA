// prefix sum,suffix sum,
//window sliddng
//kadans' algo
//multiple subarrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> prs(n);
    vector<int> sfsum(n);
    prs[0] = v[0];
    sfsum[n - 1] = v[n - 1];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (auto c : v)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 1; i < n; i++)
    {
        prs[i] = prs[i-1] + v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (prs[i] > 0)
            c++;
    }
    cout << c;

    for (int i = n - 2; i >= 0; i--)
    {
        sfsum[i] = sfsum[i] + v[i - 1];
    }
    vector<int> original1(n);
    original1[0] = prs[0];
    for (int i = 1; i < n; i++)
    {
        original1[i] = prs[i] - prs[i - 1]; // create original array from prefix summed array
    }
    vector<int> original2(n);
    original2[n - 1] = sfsum[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        original2[i] = sfsum[i] - sfsum[i - 1];
    }

    return 0;
}