#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long length;
    cin >> length;
    vector<int> vec;
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    long long maximum = LONG_MIN;
    long long sum = 0;
    int subArrayStart=-1, subArrayEnd=-1;
    for (int i=0;i<length;i++)
    {
        if(sum==0) subArrayStart=i;

        sum += vec[i];
        if (sum > maximum)
        {
            maximum = sum;
            subArrayEnd=i;
        }
        if (sum < 0) sum = 0;
    }
    cout << "maximum sum of the sub array: " << maximum << endl<<"sub array: ";
    for(int i=subArrayStart;i<=subArrayEnd;i++) cout<<vec[i]<<" ";

    return 0;
}