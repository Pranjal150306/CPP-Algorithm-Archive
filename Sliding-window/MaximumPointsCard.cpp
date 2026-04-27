class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalSum = 0;
        for(int i=0;i<cardPoints.size();i++) {
            totalSum += cardPoints[i];
        }
        if(k==cardPoints.size()) return totalSum;

        int windowSize = cardPoints.size()-k;
        int windowSum = 0;
        for(int i=0;i<windowSize;i++) {
            windowSum += cardPoints[i];
        }
        int minSum = windowSum;
        for(int i = windowSize;i<cardPoints.size();i++){
            windowSum += cardPoints[i];
            windowSum -= cardPoints[i-windowSize];
            minSum = min(minSum , windowSum);
        }
        return totalSum - minSum;
        
    }
};
