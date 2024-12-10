n = int(input("Input: "))

print("", end=" ")
for i in range(1, n + 1):
    if i % 2 != 0:
        print(i, end=" ")
print() 

print("", end=" ")
for i in range(n, 0, -1):
    if i % 2 == 0:
        print(i, end=" ")
print()