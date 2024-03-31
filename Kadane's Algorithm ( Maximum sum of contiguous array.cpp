class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN  ;
    int max_upto_here = 0 ; 
    for(int i = 0 ; i < nums.size() ; ++i){
        max_upto_here = max_upto_here+nums[i] ; 
        if(max_upto_here>max_so_far){
            max_so_far = max_upto_here ;
        }
        if(max_upto_here<0){
            max_upto_here = 0 ;
        }
    }
    return max_so_far ; 
    }
};
