class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> M;
        char Ch = 'a';
        for (int i = 0; i < key.size();i++) {
            if (key[i] == ' ') {
                continue;
            }
            if(M.find(key[i]) == M.end()){
            M[key[i]] = Ch;
            Ch++;
            }
        }

        string ans;
        for (int i = 0; i < message.size(); i++) {
            if (message[i] == ' ') {
                ans += ' ';
                continue;
            }
            ans += M[message[i]];
        }
        return ans;
    }
};