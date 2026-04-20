class Solution {
public:
        int canShip(vector<int>& weights,int capacity){
            int daysUsed = 1;
            int currentLoad = 0;
            for (int i=0;i<weights.size();i++) {
                if (currentLoad + weights[i] > capacity) {
                    daysUsed++;
                    currentLoad = weights[i];
                }else {
                    currentLoad += weights[i];
                }
            }
            return daysUsed;
        }
        int shipWithinDays(vector<int>weights,int days) {

            int low = *max_element(weights.begin(),weights.end());
            int high = accumulate(weights.begin(),weights.end(),0);
            while (low<=high) {
                int mid = low+(high-low)/2;
                int numberOfDays = canShip(weights,mid);
                if(numberOfDays<=days) {
                    high = mid-1;
                }else {
                    low = mid+1;
                }
            }
            return low;
    }
};
