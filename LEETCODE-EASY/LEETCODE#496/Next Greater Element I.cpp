class Solution {
public:

    int find(vector<int> nums2,int o){
        for(int i = 0;i < nums2.size();i++){
            if(nums2[i] == o){
                return i;
            }
        }
        return -1;
    }

    int nge(vector<int> nums2,int o,int k){
        if(o == -1){
            return -1;
        }
        for(int i = o+1;i < nums2.size();i++){
            if(nums2[i] > k){
                return nums2[i];
            }
        }
        return -1;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> NGE;
        for(int val : nums1){
              NGE.push_back(nge(nums2,find(nums2,val),val));
        }
        return NGE;
    }
};