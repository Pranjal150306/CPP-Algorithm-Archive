class Solution {
public:
  int canSplit(vector<int>& nums, int maxSumLimit) {
    int subarrays = 1;
    long long currentSum =0;
    for (int i=0;i<nums.size();i++){
        if(currentSum+nums[i]<=maxSumLimit) {
            currentSum += nums[i];
            }else {
                subarrays++;
                currentSum = nums[i];
            }
    }
    return subarrays;
  }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        while (low<=high) {
            int mid = low+(high-low)/2;
            int requiredSubarrays = canSplit(nums,mid);
            if(requiredSubarrays<=k) {
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
       return low; 
    }
};
