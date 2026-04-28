class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256, -1);
        int n = s.size();
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while (right<n) {
            if(mpp[s[right]]!= -1) {
                left = max(left, mpp[s[right]]+1);
            }
            mpp[s[right]] = right;
            maxLength = max(maxLength,right-left+1);
            right ++;
        }
        return maxLength;
        
    }
};
