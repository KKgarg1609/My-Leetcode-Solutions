class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> MC = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                             "--.",  "....", "..",   ".---", "-.-",  ".-..",
                             "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                             "...",  "-",    "..-",  "...-", ".--",  "-..-",
                             "-.--", "--.."};


                              set<string> S;

        for (int i = 0; i < words.size(); i++) {
            string temp = "";
            for (char ch : words[i]) {
                temp += MC[ch - 'a'];
            }
            S.insert(temp);
        }
        return S.size();
    }
};