class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;       // nums1 ka last actual element
        int j = n - 1;       // nums2 ka last element
        int k = m + n - 1;   // nums1 ka last position

        while(j >= 0) {

            if(i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }
    }
};
// last ke merge kree jese ki 6 or 3 hai to 6 ko last me daaldo and 3 bchaa vo compare with 5 and fir se 5 ko second last me daldo,