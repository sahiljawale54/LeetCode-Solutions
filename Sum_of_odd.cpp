class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
          int k = 1; int ans = 0;

      while(k <= arr.size()){

        int sum=0;
        for(int i=0;i<k;i++){ 
            sum+=arr[i];
        }

        ans+= sum;

        for(int i=1;i<=arr.size()-k;i++){  
            sum = sum - arr[i - 1] + arr[i + k - 1];
            ans+=sum;
        }

        k+=2;
      }      
        return ans;

    }
};
// TC- O(N2)
// SC- O(1)
