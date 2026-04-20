class Solution {
  public:
    int countStudents(vector<int> &arr,int maxPages) {
    int students = 1;
    long long currentPages = 0;
    for (int i=0;i<arr.size();i++) {
        if (currentPages+arr[i]<=maxPages) {
            currentPages += arr[i];
            }else {
                students++;
                currentPages = arr[i];
            }
    }
    return students;
}
    int findPages(vector<int> &arr, int k)  {

        if(k>arr.size()) return -1;
        int low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);
        while (low<=high) {
            int mid = low+(high-low)/2;
            int studentsRequired = countStudents(arr, mid);
            if(studentsRequired <= k) {
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
        return low;
        
    }
};
