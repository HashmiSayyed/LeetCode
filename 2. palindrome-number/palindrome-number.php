<?php

function isPalindrome($x) {
    return strval($x) == strrev(strval($x));
}

if (isPalindrome(121)) {
    echo("True\n");
} else {
    echo("False\n");
}