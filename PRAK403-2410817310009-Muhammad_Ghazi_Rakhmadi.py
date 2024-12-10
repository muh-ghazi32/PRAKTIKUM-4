a, b = map(int, input("Input: ").split())
output = []  

if a > b:
    i, j = a, b
    while i >= b and j <= a:
        output.append(f"{i} {j}")
        i -= 1
        j += 1
elif b > a:
    i, j = a, b
    while i <= b and j >= a:
        output.append(f"{i} {j}")
        i += 1
        j -= 1
print(" - ".join(output))