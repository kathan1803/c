a = input("expression: ")
x, y, z = a.split(" ")
if y == "+":
    print(f"{float(x)+float(z):.1f}")
elif y == "-":
    print(f"{float(x)-float(z):.1f}")
elif y == "/":
    print(f"{float(x)/float(z):.1f}")
elif y == "*":
    print(f"{float(x)*float(z):.1f}")