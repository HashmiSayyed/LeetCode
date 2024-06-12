<?php

function twoSum($nums, $target) {
    for ($i = 0; $i < count($nums); $i++) {
        for ($j = 0; $j < count($nums); $j++) {
            if ($i == $j) {
                continue;
            } else {
                $mySum = $nums[$i] + $nums[$j];
                if ($mySum == $target) {
                    return [$i, $j];
                }
            }
        }
    }
        return [];
}

print_r(twoSum([2, 3, 6, 8], 9));