//Subarray Product Less than K

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k<=1) return 0;
        
        int i=0, j=0, product=1, count=0;
        while(j<nums.size()) {
            
            product*=nums[j];
            
            while(product>=k) {
                product/=nums[i];
                i++;
            }
            
            count+=(j-i+1);
            j++;
        }
        
        return count;
    }
};