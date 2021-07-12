def isPrime(number):
    if number == 1 or number == 0:
        return  False
        
    limit = (number // 2) + 1
    for i in range(2, limit):
        if number % i == 0:
            return False

    return True

if __name__ == "__main__":
    number = int(input("Enter a number: "))
    print("Entered number is", "a prime." if isPrime(number) == True else "not a prime.")