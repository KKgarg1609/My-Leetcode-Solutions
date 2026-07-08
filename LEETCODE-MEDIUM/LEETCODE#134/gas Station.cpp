class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totGas = 0;
       int totCost = 0;
       int currGas = 0;
       int st = 0;
       int i = st;
        while(i < gas.size()){
        totGas += gas[i];
        totCost += cost[i];
        currGas = currGas + gas[i] - cost[i];
          i++;
          if(currGas < 0){
            currGas = 0;
            st = i;
          }
         
       }     
       return totGas >= totCost ? st : -1;
    }
};