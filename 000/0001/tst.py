# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
# The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.

MULTIPLIERS = [3, 5]

test_input = 10
test_output = [3, 5, 6, 9]

def find_natural_dividers(val):
    dividers = list()

    for i in range(1, val):
        correct = False
        for mult in MULTIPLIERS:
            if i % mult == 0:
                correct = True
                break
        if correct:
            dividers.append(i)

    return dividers

ret = find_natural_dividers(test_input)
print("Function is working {} - {}.".format("correct" if ret == test_output else "incorrect", ret))
print("Function usage for 1000 is {}".format(find_natural_dividers(1000)))
