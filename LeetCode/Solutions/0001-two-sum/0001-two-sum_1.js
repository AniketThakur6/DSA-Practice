/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    const arr = nums.map((value,index)=> [value,index]);
    arr.sort((a,b)=> a[0] - b[0]);

    let start = 0;
    let end = nums.length - 1;

    while(start<end){

        let sum = arr[start][0] + arr[end][0] 

        if(sum < target){
            start++;
        }else if(sum > target){
            end--;
        }else{
            return [arr[start][1],arr[end][1]];
        }

    }

};