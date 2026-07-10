class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size() - 1;
        if(arr.size() < 3){
            return false;
        }

        while (i != j) {
           if(arr[i+1] <= arr[i] && arr[j-1] <= arr[j]){
            return false;
           }
            if (arr[i + 1] > arr[i] ) {
                i++;
            }
            if (arr[j - 1] > arr[j]) {
                j--;
            }
           
        }
        if(i == 0 || j == arr.size()-1){
            return false;
        }
        return true;
    }
};