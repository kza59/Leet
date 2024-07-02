class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m+n == 1 || m+n == 0) {
            if(nums1[0] != 0) return;
            else {
                nums1[0] = nums2[0];
                return;
            }
            }



        int  k = 0;
        vector<int> merged;

        int i{0},j{0};

        while(k < m + n) {
            if(i != m && j != n && nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            }
            else if(j != n) {
                merged.push_back(nums2[j]);
                j++;
            }
            else {
                merged.push_back(nums1[i]);
                i++;
            }
            ++k;
        }
        nums1 = merged;
    }
};

// 1