class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int CurrentSum = 0;
        for (int i=0;i<nums.size();i++) {
            CurrentSum += nums[i];

            if (CurrentSum>maxSum) {
                maxSum=CurrentSum;
            }
            if(CurrentSum<0) {
                CurrentSum=0;
            }
        }
        return maxSum;
    }

        
    
};
