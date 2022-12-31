#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> vvi;

void print(vvi &arr)
{
    for (auto int_vector : arr)
    {
        cout << "[" << int_vector[0] << ", " << int_vector[1] << "]" << endl;
    }
}

vvi merge_intervals(vvi &intervals)
{
    vvi result;
    if (intervals.size() == 0)  return result;
    sort(intervals.begin(), intervals.end());
    result.push_back(intervals[0]);
    int j = 0;
    for (int i = 1; i < intervals.size(); i++)
    {
        // overlapping
        if (result[j][1] >= intervals[i][0])    result[j][1] = max(result[j][1], intervals[i][1]);

        // not overlapping
        else
        {
            j++;
            result.push_back(intervals[i]);
        }
    }
    return result;
}

int main()
{
    vvi intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vvi result = merge_intervals(intervals);
    cout << "Intervals :" << endl;
    print(intervals);
    cout << "Merging Intervals :" << endl;
    print(result);
    return 0;
}