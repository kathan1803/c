x = input("Greeting: ").casefold().strip()
if "hello" in x:
    print("$0")
elif "h" == x[0]:
    print("$20")
else:
    print("$100")