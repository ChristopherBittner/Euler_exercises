# The prime factors of 13195 are 5, 7, 13 and 29.
#
# What is the largest prime factor of the number 600851475143 ?
testInput = 13195
testOutput = [5, 7, 13, 29]


def isPrime(val):
    if val < 3:
        return False
    for i in range(2, val):
        if isFactor(i, val):
            return False
    return True


def isFactor(candidate, value):
    return value % candidate == 0


def primeFactors(ofValue):
    primes = list()
    for i in range (2, ofValue - 1):
        if isFactor(i, ofValue) and isPrime(i):
            primes.append(i)

    return primes


def biggestPrimeFactor(ofValue):
    for i in range (ofValue - 1, 2, -1):
        if isFactor(i, ofValue) and isPrime(i):
            return  i

    raise Exception("Could not find biggest prime factor")

print("Function is working {}".format("correctly" if primeFactors(testInput) == testOutput else "incorrectly"))
print("Largest prime factor of 600851475143 is {}".format(biggestPrimeFactor(600851475143)))
