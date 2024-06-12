function twoSum(nums: number[], target: number): number[] {
    let arr: number[] = [];
    for (let i: number = 0; i < nums.length; i++) {
        for (let j: number = 0; j < nums.length; j++) {
            if (i == j) {
                continue;
            } else {
                let mySum: number = nums[i] + nums[j];
                if (mySum == target) {
                    arr.push(i);
                    arr.push(j);
                    return arr;
                }
            }
        }
    }
    return arr;
};

console.log(twoSum([3, 6, 8, 4], 9));