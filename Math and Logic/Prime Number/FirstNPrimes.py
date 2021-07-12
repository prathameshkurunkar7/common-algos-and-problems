def getPrimes(length):

    if length == 0:
        return []
    
    primes = [2]

    i = 3
    while len(primes) < length:
        for ele in primes:
            flag = 1
            if i % ele == 0:
                flag = 0
                break
        if flag:
            primes.append(i)
        i += 1

    return primes

if __name__ == "__main__":
    number = int(input("Enter a number: "))
    print(getPrimes(number))