class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> S;
        for(int i = 0; i < sentence.size();i++){
            S.insert(sentence[i]);
        }
        return S.size()==26;
    }
};