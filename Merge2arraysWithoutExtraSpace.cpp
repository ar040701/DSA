class Solution {
    void swapIfGreater(vector<int>& nums1, vector<int>& nums2, int left, int right) {
        if (nums1[left] > nums2[right]) {
            swap(nums1[left], nums2[right]);
        }
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                // Case 1: both pointers in nums1
                if (left < m && right < m) {
                    swapIfGreater(nums1, nums1, left, right);
                }

                // Case 2: left in nums1, right in nums2
                else if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }

                // Case 3: both pointers in nums2
                else {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                }

                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Finally, copy nums2 into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};