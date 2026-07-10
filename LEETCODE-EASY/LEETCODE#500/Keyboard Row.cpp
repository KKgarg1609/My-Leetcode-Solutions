class Solution {
public:
    bool find(string s, char Ch) {
        for (char ch : s) {
            if (ch == Ch) {
                return true;
            }
        }
        return false;
    }

    bool isForm(string sam, string first, string second, string third) {
        if(sam.size() <= 1){
            return true;
        }

        if (find(first, sam[0])) {//if line belong to first line
            for (char ch : sam) {
                if (!find(first, ch)) {
                    return false;
                }
            }
            return true;
        } else if (find(second, sam[0])) {
            for (char ch : sam) {
                if (!find(second, ch)) {
                    return false;
                }
            }
            return true;
        } else if(find(third, sam[0])) {
            for (char ch : sam) {
                if (!find(third, ch)) {
                    return false;
                }
            }
            return true;
        }

        return false;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string first = "qwertyuiopQWERTYUIOP";
        string second = "asdfghjklASDFGHJKL";
        string third = "zxcvbnmZXCVBNM";

        for (auto val : words) {
            if (isForm(val, first, second, third)) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};