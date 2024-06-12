function twoSum (nums, target) {
    for (let i = 0; i < nums.length; i++) {
        for (let j = 0; j < nums.length; j++) {
            if (i == j) {
                continue;
            } else {
                let mySum = nums[i] + nums[j];
                if (mySum == target) {
                    return [i, j];
                }
            }
        }
    }
    return [];
};

console.log(twoSum([3, 6, 7, 1], 9));