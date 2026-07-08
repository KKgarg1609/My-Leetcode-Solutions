class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k ==1 ){
            return nums;
        }

        deque<int> Q;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            while (!Q.empty() && nums[Q.back()] <= nums[i]) {// pop smaller elements at the back
                Q.pop_back();
            }

            if (Q.empty() || nums[Q.back()] > nums[i]) {
                Q.push_back(i);//insert current element
            }

            while (Q.front() <= i-k && !Q.empty()) {//remove previous window elements 
                Q.pop_front();
            }

            if (i >= k-1) {//insert window maximum to ans;
                ans.push_back(nums[Q.front()]);
            }
        }

        return ans;
    }
};