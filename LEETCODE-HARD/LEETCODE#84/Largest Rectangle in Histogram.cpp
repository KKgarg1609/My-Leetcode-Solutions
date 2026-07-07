class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n, n);
        vector<int> pse(n,-1);

        int i = n - 1;
        stack<int> st;
    
        while (i >= 0) {
            if (st.empty()) {
                st.push(i);
                i--;
            } else if (heights[st.top()] < heights[i]) {
                nse[i] = st.top();
                st.push(i);
                i--;
            } else {
                if (!st.empty()) {
                    st.pop();
                }
            }
        }

          i = 0;
        stack<int> st2;
        while (i < n) {
            if (st2.empty()) {
                st2.push(i);
                i++;
            } else if (heights[st2.top()] < heights[i]) {
                pse[i] = st2.top();
                st2.push(i);
                i++;
            } else {
                if (!st2.empty()) {
                    st2.pop();
                }
            }
        }

        int maxArea = 0;
        for(int i = 0; i < heights.size();i++){
            int area = (nse[i]-pse[i]-1)*heights[i];
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};