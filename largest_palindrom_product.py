def is_palindrome(num):
    num_string = str(num)
    return num_string == num_string[::-1]


largest_palindrome = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

print("Largest palindrome: ", largest_palindrome)
