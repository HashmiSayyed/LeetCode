def romanToInt(s: str) -> int:
    rome = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    numLst = list(s.upper())

    sum = 0
    count = 0
    running = True

    while (running):
        if (count == len(numLst) - 1):
            sum = sum + rome[numLst[count]]
            running = False
        elif (rome[numLst[count]] < rome[numLst[count+1]]):
            sum = sum + rome[numLst[count+1]] - rome[numLst[count]]
            count = count + 1
            if (count == len(numLst) - 1):
                running = False
            count = count + 1
        else:
            sum = sum + rome[numLst[count]]
            count = count + 1

    return(sum)


print(romanToInt("XIV"))