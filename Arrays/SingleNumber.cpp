class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int result =0;
        for (int i =0;i<nums.size(); i++){
            int num = nums[i];
            result = result^num;

        }
        return result;

        
        
    }
};
