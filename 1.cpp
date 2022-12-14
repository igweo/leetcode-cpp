class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Look for target - ele in map; not in map add the ele with index;
        // If in name return m[target - ele] and current idx;
        unordered_map<int, int> m;
        vector<int> sol;
        int idx = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) == m.end())
            {
                m[nums[i]] = idx;
            }
            else
            {
                sol.push_back(m[target - nums[i]]);
                sol.push_back(idx);
            }
            idx++;
        }
        return sol;
    }
};