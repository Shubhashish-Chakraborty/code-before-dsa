const isArmstrong = (number) => {
    let temp = number;
    // calculating number of digitss...
    let numberOfDigits = 0;
    while (temp > 0) {
        numberOfDigits+=1;
        temp = Math.floor(temp / 10);
    }
    temp = number;
    // check armstrong
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
    const number = 1533;
    if (isArmstrong(number)) {
        console.log(`${number} is an ARMSTRONG NUMBER!`)
    } else {
        console.log(`${number} is NOT AN ARMSTRONG NUMBER!`);
    }
}
main();