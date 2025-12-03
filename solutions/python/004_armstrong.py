def COUNT_DIGITS(NUMBER):
    digitsCount = 0
    while (NUMBER > 0):
        digitsCount += 1
        NUMBER = NUMBER // 10
    
    return digitsCount


def main(NUMBER):
    temp = NUMBER
    numberOfDigits = COUNT_DIGITS(NUMBER);
    total = 0
    while (temp > 0):
        digit = temp % 10
        total += (digit ** numberOfDigits)
        temp //= 10

    if (total == NUMBER):
        return True
    else:
        return False


number = int(input("Enter the Number: "))

if (main(number)):
    print(f"{number} IS AN ARMSTRONG")
else:
    print(f"{number} IS NOT AN ARMSTRONG")