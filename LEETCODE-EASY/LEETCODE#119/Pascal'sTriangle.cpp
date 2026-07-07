class Solution {
public:
   vector<int> nextVect(vector<int> vec){
    vector<int> vecnex = {1};
    vec.push_back(0); 
    for(int i = 1; i <= vec.size()-1;i++){
        vecnex.push_back(vec[i]+vec[i-1]);
    }
    return vecnex;
   }

    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> Triangle;
       Triangle.push_back({1});
       for(int i = 1;i < numRows;i++){
        Triangle.push_back(nextVect(Triangle[i-1]));
       }
       return Triangle;
    }
};