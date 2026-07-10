class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
       pair<int,int> currPosition = {0,0};
       for(int i = 0; i < commands.size();i++){
        if(commands[i] == "UP"){
            currPosition.first-=n;
        }else if(commands[i] == "DOWN"){
            currPosition.first+=n;
        }else if(commands[i] == "RIGHT"){
            currPosition.second++;
        }else if(commands[i] == "LEFT"){
            currPosition.second--;
        }
       }
       return  currPosition.first+ currPosition.second;
    }
};