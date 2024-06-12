function reverseString(str: string): string {
    let arr: string[] = str.split("");
    let revArr: string[] = arr.reverse();
    let revStr: string = revArr.join("");
    return revStr;
}

function isPalindrome(x: number): boolean {
    return x.toString() == reverseString(x.toString());
};

console.log(isPalindrome(121));