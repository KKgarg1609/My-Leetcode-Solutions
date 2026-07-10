class Solution {
public:
    double average(vector<int>& salary) {
        if(salary.size() <= 2){
            return 0;
        }
        int maxi = 0;
        int mini = INT_MAX;
        double sum = 0;
        double count = 0;
        for(int i = 0; i < salary.size();i++){
            count++;
            sum += salary[i];
            maxi = max(maxi,salary[i]);
            mini = min(mini,salary[i]);
        }
        sum = sum - maxi - mini;
        double average = sum/(count-2);
        return average;
    }
};