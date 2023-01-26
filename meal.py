def main():
    a = input("What time is it? ")
    if  7.0<=convert(a)<=8.0:
        print("breakfast time")
    elif 12.0<=convert(a)<=13.0:
        print("lunch time")
    elif 18.0<=convert(a)<=19.0:
        print("dinner time")


def convert(time):
    x, y = time.split(":")
    z = float(x) + float(y)/60
    return z


if __name__ == "__main__":
    main()