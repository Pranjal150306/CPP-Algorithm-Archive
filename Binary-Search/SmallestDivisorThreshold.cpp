class Solution {
public:
        int findMax(vector<int>& nums) {
            int maxi = INT_MIN;
            for (int i=0;i<nums.size();i++) {
                maxi = max(maxi,nums[i]) ;
            }
            return maxi;
        }
         int smallestDivisor(vector<int>& nums, int threshold) {
            int low = 1;
            int high = findMax(nums);
            while (low<=high) {
                int mid = low+(high-low)/2;
                long long sum = 0;
                for (int i=0;i<nums.size();i++) {
                    sum+=(nums[i]+mid-1)/mid;
                }
                if(sum>threshold){
                    low=mid+1;
                }else {
                    high = mid-1;
                }
            }
            return low;
        }
};
