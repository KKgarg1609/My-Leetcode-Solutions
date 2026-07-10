// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    int st = 1;
    int end = n;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isBadVersion(mid) && !isBadVersion(mid-1)){
            return mid;
        }else if(isBadVersion(mid+1) && !isBadVersion(mid)){
            return mid+1;
        }else if(!isBadVersion(mid)){
            st = mid+1;
        }else if(isBadVersion(mid)){
            end = mid-1;
        }

    }
    return 0;
    }
};