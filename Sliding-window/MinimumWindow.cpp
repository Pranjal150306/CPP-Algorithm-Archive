class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0, right =0;
        int minLength = INT_MAX;
        int startIndex = -1;
        int freq[128] = {0};
        for (int i = 0;i<t.length();i++) {
            char ch = t[i];
            freq[ch]++;
        }
        int count = 0;
        while (right<s.size()){
            if(freq[s[right]]>0) {
                count ++;
            }
            freq[s[right]]--;
            while(count == t.length()) {
                if(right-left+1 < minLength) {
                    minLength = right-left+1;
                    startIndex = left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0) {
                    count --;
                }
                left++;
            }
            right++;
         }
            if(startIndex == -1) {
                return "";
            }
        return s.substr(startIndex,minLength);
    }
};
