<?php

function romanToInt($s) {
    $rome = array("I" => 1, "V" => 5, "X" => 10, "L" => 50, "C" => 100, "D" => 500, "M" => 1000);
    $numLst = str_split(strtoupper($s), 1);

    $sum = 0;
    $cnt = 0;
    $running = true;

    while ($running) {
        if ($cnt == count($numLst) - 1) {
            $sum += $rome[$numLst[$cnt]];
            $running = false;
        } elseif ($rome[$numLst[$cnt]] < $rome[$numLst[$cnt + 1]]) {
            $sum += $rome[$numLst[$cnt + 1]] - $rome[$numLst[$cnt]];
            $cnt++;
            if ($cnt == count($numLst) - 1) {
                $running = false;
            }
            $cnt++;
        } else {
            $sum += $rome[$numLst[$cnt]];
            $cnt++;
        }
    }

    return($sum);
}

echo(romanToInt("XIV"));
echo("\n");