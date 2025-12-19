class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt = 0;
        int current_cnt = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] == 1) {
                current_cnt ++;
                if (current_cnt > max_cnt) {
                    max_cnt = current_cnt;
                }
            }
            else {
                current_cnt = 0;
            }
        }
        return max_cnt ;
        
    }
};
