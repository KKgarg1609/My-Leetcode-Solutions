class Solution {
public:

    int minabs(vector<int> arr){
        sort(arr.begin(),arr.end());
        int Min = INT_MAX;
        for(int i = 0;i < arr.size()-1;i++){
            Min = min(Min,arr[i+1]-arr[i]);
        }
        return Min;
    }

    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minabsol = minabs(arr);
        vector<int> temp = {};
        vector<vector<int>> ans = {};
       for(int i = 0;i < arr.size()-1;i++){
        if(arr[i+1]-arr[i] == minabsol){
              temp.push_back(arr[i]);
              temp.push_back(arr[i+1]);
              ans.push_back(temp);
              temp = {};
        }
       }
       return ans;
    }
};