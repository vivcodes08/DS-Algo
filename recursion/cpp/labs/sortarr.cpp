
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void Solve(vector<int> &nums,int t)
    {
        if(nums.size()==0||t>=nums[nums.size()-1])
        {
            nums.push_back(t);
            return;
        }
        
        int to=nums[nums.size()-1];
        nums.pop_back();
        Solve(nums,t);
        nums.push_back(to);
            
    }
    void getSorted(vector<int> &nums)
    {
        if(nums.size()==0)
            return;
        
        int t=nums[nums.size()-1];
        nums.pop_back();
        getSorted(nums);
        Solve(nums,t);
        return;
    }
    
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1)
            return nums;
        
        getSorted(nums);
        for(int i=0;i<nums.size();i++){
            cout << nums[i] <<endl;
        }
        return nums;
    }
};

int main(){

    vector<int> vec={3,2,1,5};
    Solution solution;
    solution.sortArray(vec);
    return 0;
}

