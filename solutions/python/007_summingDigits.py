number = int(input("Enter the Number: "))
sum = 0
while number > 0:
    dig = number % 10
    sum += dig
    number //= 10

print(f"Sum of the Digits of the Number is: {sum}")