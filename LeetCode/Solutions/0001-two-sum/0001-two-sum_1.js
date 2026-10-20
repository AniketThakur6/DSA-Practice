/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    nums.sort((a,b)=> a-b)

    let start = 0;
    let end = nums.length - 1;

    while(start<end){

        let value = nums[start] + nums[end] 

        if(value< target){
            start++;
        }else if(value > target){
            end--;
        }else{
            return [start,end];
        }

    }

};