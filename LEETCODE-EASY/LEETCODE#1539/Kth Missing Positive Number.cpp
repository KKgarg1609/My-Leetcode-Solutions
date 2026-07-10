class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(k <= 0){
            return -1;
        }
        int count = 0;
        unordered_set<int> S;
        for(int i = 0; i < arr.size();i++){
            if(S.find(arr[i]) == S.end()){
                S.insert(arr[i]);
            }
        }
        int i = 1;
        while(count < k){
            if(S.find(i) == S.end()){
                count++;
                if(count == k){
                    return i;
                }
                i++;
            }else if(S.find(i) != S.end()){
                i++;
            }
        }
        return -1;
    }
};