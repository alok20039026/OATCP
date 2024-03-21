#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxRotateValue(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;

    vector<int> dp(n + 1);
    int total_sum = 0;
    int current_sum = 0;

    for (int i = 0; i < n; ++i)
    {
        total_sum += nums[i];
        current_sum += i * nums[i];
    }

    dp[0] = current_sum;

    for (int i = 1; i < n; ++i)
    {
        dp[i] = dp[i - 1] + total_sum - n * nums[n - i];
    }

    int max_val = *max_element(dp.begin(), dp.end());

    return max_val;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cout << "Maximum rotate value: " << maxRotateValue(nums) << endl;

    return 0;
}
