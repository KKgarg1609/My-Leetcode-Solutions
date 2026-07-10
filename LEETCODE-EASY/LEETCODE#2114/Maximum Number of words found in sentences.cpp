class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int Max = 0;
        for(int i = 0; i < sentences.size();i++){
            int temp = 0;
            for(int j = 0; j < sentences[i].size();j++){
                   if(sentences[i][j] == ' '){
                    temp++;
                   }
            }
            Max = max(Max,temp+1);
        }
        return Max;
    }
};