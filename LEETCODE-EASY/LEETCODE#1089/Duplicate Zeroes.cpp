class Solution {
public:
 
    void insertzero(vector<int>& arr,int i){
        for(int j = arr.size()-1;j >= i;j--){
            arr[j] = arr[j-1];
            if(j == i){
                arr[j] = 0;
            }
        }
        return;
    }
    void duplicateZeros(vector<int>& arr) {
        for(int i = 1; i < arr.size();i++){
            if(arr[i-1] == 0){
                insertzero(arr,i);
                i++;
            }

        }
        return;
    }
};