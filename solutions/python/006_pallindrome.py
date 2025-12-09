def isStringPallindrome(STRING):
    if (STRING[::-1] == STRING):
        return True
    else:
        return False
def isNumberPallindrome(NUMBER):
    if (str(NUMBER)[::-1] == str(NUMBER)):
        return True
    else:
        return False

if (isNumberPallindrome(1112)):
    print("YES it is pallindrome!")
else:
    print("NO IT IS NOT A PALLINDROME!")