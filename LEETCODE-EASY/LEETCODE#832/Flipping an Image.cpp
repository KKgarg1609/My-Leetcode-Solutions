class Solution {
public:

    int opp(int el){
        if(el == 1){
            return 0;
        }else{
            return 1;
        }
        return -1;
    }

    vector<int> reverse(vector<int>& im){
        vector<int> ans;
        for(int i = im.size()-1;i >=0;i--){
            ans.push_back(opp(im[i]));
        }
       return ans;
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
         vector<vector<int>> ans;
        for(int i = 0; i < image.size();i++){
           ans.push_back(reverse(image[i]));
        }
        return ans;
    }
};