class NumArray {
public:
    vector<int> NUM;
    vector<int> Psum;

    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
               NUM.push_back(nums[i]);
               sum += nums[i];
               Psum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
       return Psum[right]-Psum[left]+NUM[left];
    }
};