class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<vector<int>> temp;
        for(int i = 1;i < sqrt(area)+1 ; i++){
            if(area % i == 0){
                if(i < area/i){
                temp.push_back({area/i,i});
                }else {
                    temp.push_back({i,area/i});
                }
        }
        }
        return temp.back();
    }
};