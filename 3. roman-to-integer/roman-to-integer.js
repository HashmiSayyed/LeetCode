function romanToInt (s) {
    let rome = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000};
    let nuLst = s.toUpperCase().split("");

    let sum = 0;
    let count = 0;
    let running = true;

    while (running) {
        if (count == s.length - 1) {
            sum += rome[nuLst[count]];
            running = false;
        } else if (rome[nuLst[count]] < rome[nuLst[count+1]]) {
            sum += rome[nuLst[count+1]] - rome[nuLst[count]];
            count++;
            if (count == s.length - 1) {
                running = false;
            }
            count++;
        } else {
            sum += rome[nuLst[count]];
            count++;
        }
    }

    return(sum);
}

console.log(romanToInt("XIV"));