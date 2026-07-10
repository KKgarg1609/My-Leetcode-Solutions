class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0;
        int j = s.size();
        vector<int> match;
        for(char ch : s){
            if(ch == 'I'){
                match.push_back(i);
                i++;
            }else if(ch == 'D'){
                match.push_back(j);
                j--;
            }
        }
        match.push_back(i);
        return match;
    }
};