x = input("What is the answer to the great question of life, the universe and everything? ")
if x.replace(" ", "") == "42":
    print("Yes")
elif x.lower() == "forty-two":
    print("Yes")
elif x.lower() == "forty two":
    print("Yes")
else:
    print("No")