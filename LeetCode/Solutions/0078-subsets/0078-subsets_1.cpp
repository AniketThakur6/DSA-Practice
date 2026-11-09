class Solution {
public:

    void subSeq(vector<int>& arr,int index,int size,vector<vector<int>>& ans,vector<int> temp){
        if(index==size){
            ans.push_back(temp);
            return;
        }
        // not include 
        subSeq(arr,index+1,size,ans,temp);

        // include 
        temp.push_back(arr[index]);
        subSeq(arr,index+1,size,ans,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subSeq(nums,0,nums.size(),ans,temp);
        return ans;
    }
};