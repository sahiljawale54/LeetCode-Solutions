class Solution {
public:
    bool check(vector<int>& nums) {
        int pair = 0;
        
        int n = nums.size();
        
        for(int i = 1 ; i < n ; i++){
            
            if( nums[i-1] > nums[i] )
                pair++;
        }
        if( nums[n-1] > nums[0])
            pair++;
        
        return pair<=1;
    }
};

// if we get more than such pair answer is will be false 
//   iF all element are same then pair = 0 , but this is vaild case 

// TC-O(N)
//   SC-O(1)
