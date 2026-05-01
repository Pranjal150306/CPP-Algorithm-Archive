class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int maxLength = 0;
        int countZeroes = 0;
        while (right<n) {
            if(nums[right] ==0) {
                countZeroes ++;
            }
        while(countZeroes>k) {
            if(nums[left] == 0) {
                countZeroes --;
            }
            left ++;
        }
        maxLength = max(maxLength , right-left+1);
        right ++;
        }
            return maxLength;
            }
        };
