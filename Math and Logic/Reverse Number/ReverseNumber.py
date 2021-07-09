def reverseAlternateSolution(number):
    return int(str(number)[::-1])

def reverse(number):
    
    reversedNumber = 0

    while number > 0:

        reversedNumber = (reversedNumber * 10) + (number % 10)
        number = number // 10

    return reversedNumber

number = int(input("Enter a number: ").strip())
print("Reversed number: ", reverse(number))