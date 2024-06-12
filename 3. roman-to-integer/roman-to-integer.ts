function romanToInt(s: string): number {
    let rome: {"I": number, "V": number, "X": number, "L": number, "C": number, "D": number, "M": number} = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000};
    let nuLst: string[] = s.toUpperCase().split("");

    let sum: number = 0;
    let count: number = 0;
    let running: boolean = true;

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