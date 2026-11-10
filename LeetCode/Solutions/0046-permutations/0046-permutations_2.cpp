class Solution {
public:

    void permutation(vector<int>& arr,int index,vector<vector<int>>& ans){
        if(arr.size()==index){
            ans.push_back(arr);
            return;
        }

        for(int i=index;i<arr.size();i++){
            swap(arr[i],arr[index]);
            permutation(arr,index+1,ans);
            swap(arr[i],arr[index]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(nums,0,ans);
        return ans;
    }
};