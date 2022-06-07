class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> dupl = nums1;
        int i=0;
        int j=0;
        int k=0;
        while(i<m&&j<n){
            if(dupl[i]<nums2[j]){
                nums1[k] = dupl[i];
                i++;
                k++;
            }else{
                nums1[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i<m){
            nums1[k] = dupl[i];
            i++;
            k++;
        }
        while(j<n){
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
};