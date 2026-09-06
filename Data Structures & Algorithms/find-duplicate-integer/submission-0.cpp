class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_set<int> list;

        for(int n: nums)
        {
            if(list.count(n)) return n;
            list.insert(n);
        }

        return 0;
    }
};
