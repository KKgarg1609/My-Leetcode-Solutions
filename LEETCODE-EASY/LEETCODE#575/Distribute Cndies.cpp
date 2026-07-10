class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int i = 0;i < candyType.size();i++){
            if(s.find(candyType[i]) == s.end()){
                s.insert(candyType[i]);
            }else{
                continue;
            }
        }
        int Max = candyType.size()/2;
        return Max < s.size() ? Max : s.size();
    }
};