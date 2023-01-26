def convert(x):
    y = x.replace(":)","🙂")
    z = y.replace(":(","🙁")
    return z

def main():
    x = input("Write some text: ")
    y = convert(x)
    print(y)

main()