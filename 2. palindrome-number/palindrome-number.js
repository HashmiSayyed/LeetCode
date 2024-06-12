function reverseString(str) {
    let arr = str.split("");
    let revArr = arr.reverse();
    let revStr = revArr.join("");
    return revStr;
}

function isPalindrome (x) {
    return x.toString() == reverseString(x.toString());
}

console.log(isPalindrome(121));