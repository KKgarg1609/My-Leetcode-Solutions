class Solution {
public:

    int ind(vector<string> list2, string str){
        if(list2.empty()){
            return -1;
        }
        for(int i = 0; i < list2.size();i++){
            if(list2[i] == str){
                return i;
            }
        }
        return -1;
    }

    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        if(list1.empty() || list2.empty() || list1.empty() && list2.empty()){
            return {};
        }
        int index = 0;
        int minIn = list1.size()+list2.size();
        for(int i = 0;i < list1.size();i++){

            if(ind(list2,list1[i]) >= 0){
             index = i + ind(list2,list1[i]);
             }else{
             index = minIn+1;
             }

             if(index < minIn){
                ans.clear();
                ans.push_back(list1[i]);
                minIn = index;
             }
             else if(index > minIn){
                continue;
             }
             else if(index == minIn){
                ans.push_back(list1[i]);
             }
        }
        return ans;
    }
};