max = None
min = None

while True:
    # user input
    num = input("Enter a number: ")
    
    if num == "done":
        break
    # type checking and bubble sort thingy
    try:
        n = int(num)
        if max is None or max < n:
            max = n
        if min is None or min > n:
            min = n
    except:
        print("Invalid input")
        continue

print("Maximum is", max)
print("Minimum is", min)
