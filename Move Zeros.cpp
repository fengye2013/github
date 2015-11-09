class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int istart=0;
        int jstart=0;
        int n=nums.size();
        for(;istart<n;istart++)
        {
            if(nums[istart]==0)
                continue;
            else
            {
                nums[jstart++]=nums[istart];
            }
        }
        for(;jstart<n;jstart++) 
            nums[jstart]=0;       
    }
};
