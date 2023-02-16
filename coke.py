i = 50
while i > 0:
    print("Amount Due:", i)
    x = int(input("Insert Coin: "))
    if x==25 or x==10 or x==5:
        i = i - x
print("Change Owed:", abs(i))