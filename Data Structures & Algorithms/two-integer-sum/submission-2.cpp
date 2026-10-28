class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>m1;
        for(int i=0;i<nums.size();i++)
        {
            m1[nums[i]]=i; //m1s key-value of num and value of m1 as nums index
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m1.count(target-nums[i]) & m1[target-nums[i]]!=i)
            {
                return{i,m1[target-nums[i]]};
            }
        }
        return {};
        
    }
};
