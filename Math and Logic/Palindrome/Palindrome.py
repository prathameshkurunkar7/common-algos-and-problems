def reverse(number):
    
    reversedNumber = 0

    while number > 0:

        reversedNumber = (reversedNumber * 10) + (number % 10)
        number = number // 10

    return reversedNumber

def isPalindrome(number):
    return  number == reverse(number)

number = int(input("Enter a number: ").strip())
result = isPalindrome(number)
print("Entered number is", "a palindrome." if result == True else "not a palindrome.")
