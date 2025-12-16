class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long n=nums.size();
        long long expected_sum = n*(n+1)/2;
        long long actual_sum = 0;
        for (int num : nums) {
            actual_sum += num ;
    }
    return (int)(expected_sum - actual_sum);        
    }
};
