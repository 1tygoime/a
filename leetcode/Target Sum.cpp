class Solution {
public:
    int dp[2][2005], index = 0;
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<int> a = nums;
        int sum_min = 0, sum_max = 0;
        for(const int &i: a){
            sum_min += (i < 0 ? i : -i);
            sum_max += abs(i);
        }
        if(target > sum_max || target < sum_min) return 0;

        for(int i = 0; i <= 1; i++) for(int j = 0; j < 2005; j++)
            dp[i][j] = 0;
        dp[0][1000 + a[0]] = 1;
        dp[0][1000 - a[0]] += 1;

        for(int i = 1; i < a.size(); i++){
            index = i % 2;
            for(int s = sum_min; s <= sum_max; ++s)
                if(dp[1 - index][s + 1000])
                    dp[index][s + a[i] + 1000] += dp[1 - index][1000 + s],
                    dp[index][s - a[i] + 1000] += dp[1 - index][1000 + s];

            for(int s = sum_min; s <= sum_max; ++s) dp[1 - index][s + 1000] = 0;
        }

        return dp[index][target + 1000];
    }
};
