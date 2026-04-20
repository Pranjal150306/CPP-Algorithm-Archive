class Solution {
  public:
    bool canPlace(vector<int>&stalls,int distance,int k) {
     int last_position = stalls[0];
        int count = 1;
        int n = stalls.size();
        for (int i = 1;i<n;i++) {
            if(stalls[i]-last_position>=distance) {
                count ++;
                last_position = stalls[i];
        }
        if (count>=k) return true;
        }
                return false;
    }

int aggressiveCows(vector<int>&stalls,int k ){
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low = 1;
        int high = stalls[n-1]-stalls[0];
        int ans = 1;
        while (low<=high) {
        int mid = low +(high-low)/2;
        if(canPlace(stalls,mid,k)) {
            ans = mid;
            low = mid+1;
        }else {
            high = mid-1;
        }
    }
        return ans;
        
    }
}; 
