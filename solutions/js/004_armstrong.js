const countDigits = (number) => {
    let temp = number
    let numofdigits = 0;
    while (temp > 0) {
        numofdigits += 1;
        temp = Math.floor(temp / 10);
    }
    return numofdigits;
}
const isArmstrong = (number) => {
    let temp = number;
    let numberOfDigits = countDigits(number);
    let sum = 0;
    while (temp > 0) {
        let digit = temp % 10;
        sum += Math.pow(digit, numberOfDigits);
        temp = Math.floor(temp / 10);
    }
    if (sum === number) {
        return true;
    } else {
        return false;
    }
}

function main() {
    const number = 153;
    if (isArmstrong(number)) {
        console.log(`${number} is an ARMSTRONG NUMBER!`)
    } else {
        console.log(`${number} is NOT AN ARMSTRONG NUMBER!`);
    }
}
main();