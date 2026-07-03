class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> freq(100001,0);
        int left = 0;
        int right = 0;
        int maxLength = 0;
        int distinct_count = 0;
        while (right<fruits.size()) {
            if(freq[fruits[right]] == 0) {
                distinct_count++;
            }
            freq[fruits[right]]++;
        
        while(distinct_count>2) {
            freq[fruits[left]]--;
            if(freq[fruits[left]] == 0) {
                distinct_count --;
            }
            left++;
        }
            maxLength = max(maxLength, right-left+1);
            right++;
    }
        return maxLength;
     }
};
