class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int best = INT_MIN, sum = 0;
        for (int k = 0; k < nums.size(); k++) {
        sum = max(nums[k],sum+nums[k]);
        best = max(best,sum);
        }
        return best;
        
    }
};

// TC- O(N) 
// SC- O(1)
