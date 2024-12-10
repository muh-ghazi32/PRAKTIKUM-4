baris, kelipatan = map(int, input("Input: ").split())
total = 0  

for i in range(1, baris + 1):
    jumlah_baris = 0  
    print("(", end="")

    for j in range(i, 0, -1):  
        nilai = j * kelipatan
        jumlah_baris += nilai
        print(f"{j} * {kelipatan}", end="")
        if j > 1:
            print(" + ", end="")
    print(f") = {jumlah_baris}")
    total += jumlah_baris
print(total)