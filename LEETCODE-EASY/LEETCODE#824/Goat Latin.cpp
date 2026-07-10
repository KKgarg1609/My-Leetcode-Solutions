class Solution {
public:

     bool isVowel(char ch){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
     }

    string toGoatLatin(string sentence) {
        vector<string> vec;
        string temp;

        for(int i = 0; i <= sentence.size();i++){
            if(sentence[i] == ' ' || i == sentence.size()){
                vec.push_back(temp);
                temp = "";
                continue;
            }
            temp += sentence[i];
        }

        string x = "a";

        for(int i = 0; i < vec.size();i++){
            if(!isVowel(vec[i][0])){
                char temp = vec[i][0];
                vec[i].erase(vec[i].begin());
                vec[i] += temp;
            }
            vec[i] += "ma";
            vec[i] += x;
            x += "a";
        }
 
         string Ans = "";
         for(auto it : vec){
            Ans += it;
            Ans += ' ';
         }
         Ans.pop_back();
         return Ans;
    }
};