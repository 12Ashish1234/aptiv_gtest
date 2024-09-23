# add2vals.py
def add(a, b):
    return a + b

if __name__ == "__main__":
    val1 = float(input("Enter the first value: "))
    val2 = float(input("Enter the second value: "))
    result = add(val1, val2)
    print(f"Result: {result}")
