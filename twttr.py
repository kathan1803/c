x = input("Input: ")
print("Output: ", end="")
for i in x:
    if not i in ['a','e','i','o','o','u','A','E','I','O','U']:
        print(i, end="")
print()