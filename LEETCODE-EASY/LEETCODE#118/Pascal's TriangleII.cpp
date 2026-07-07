class Solution {
public:

   vector<int> nextVec(vector<int> vec){
    vector<int> vecnext = {1};
    vec.push_back(0);
    for(int i = 1;i <= vec.size()-1;i++){
        vecnext.push_back(vec[i]+vec[i-1]);
    }
    return vecnext;
   }
    vector<int> getRow(int rowIndex) {
        vector<int> input = {1};
        for(int i = 1; i <= rowIndex;i++){
            input = nextVec(input);
        }
        return input;
    }
};