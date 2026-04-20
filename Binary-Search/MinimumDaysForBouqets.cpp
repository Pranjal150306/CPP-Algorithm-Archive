class Solution {
public:
        int findMax(vector<int>& bloomDay) {
            int maxi = INT_MIN;
            int n = bloomDay.size();
            for (int i = 0;i<n;i++) {
                maxi = max(maxi,bloomDay[i]);
                }
                return maxi;
            }
            bool canMake(vector<int>& bloomDay,int dayLimit,int m, int k) {
                int cntFlowers =0;
                int totalBouquets = 0;
                for (int i=0;i<bloomDay.size(); i++) {
                    if(bloomDay[i]<=dayLimit) {
                        cntFlowers++;

                        if(cntFlowers == k) {
                            totalBouquets++;
                            cntFlowers=0;

                            if(totalBouquets == m) {
                                return true;
                            }
                        }
                            }else {
                                cntFlowers =0;
                            }
                        }
                        return false;
                    }
        int minDays(vector<int>& bloomDay,int m, int k) {
            if((long long)m*k>bloomDay.size())  {
                return -1;
            }
            int low = 1;
            int high = findMax(bloomDay);
            int ans = -1;
            while (low<=high) {
                int mid = low +(high-low)/2;
                if(canMake(bloomDay,mid,m,k)) {
                    ans = mid;
                    high = mid-1;
                }else {
                    low = mid+1;
                }
            }
            return ans;
    }
};
