//Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int start = 0, end = nums.size()-1;
        for(int mid=0; mid<=end; ) {
            if(nums[mid]==0) swap(nums[start++],nums[mid++]);
            else if(nums[mid]==2) swap(nums[end--],nums[mid]);
            else mid++;
        } 
    }
};