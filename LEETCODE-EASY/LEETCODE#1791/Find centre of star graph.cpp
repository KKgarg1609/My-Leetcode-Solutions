class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> M;
        for(int i = 1;i <=edges.size()+1;i++){
            M[i] = 0;
        }
        for(int i = 0; i < edges.size();i++){
               M[edges[i][0]]++;
               M[edges[i][1]]++;
        }
        for(int i = 1;i <= edges.size()+1;i++){
            if(M[i] >= edges.size()){
                return i;
            }
        }
        return -1;
    }
};