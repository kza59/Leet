class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merge the two arrays first 
        vector<int> combined;
        if(nums1.size() + nums2.size() <= 1) return nums1.size() < nums2.size() ? nums2[0] : nums1[0];
        for(auto& item : nums1) combined.push_back(item);
        for(auto& item : nums2) combined.push_back(item);
        sort(combined.begin(),combined.end());
        cout << combined[(combined.size()/2)-1] << combined[(combined.size()/2)] << endl;
        if(combined.size() % 2) { //if its odd
            return combined[combined.size()/2];
        }
        else return static_cast<double>(combined[(combined.size()/2)-1] + combined[(combined.size()/2)])/2;
    }
};