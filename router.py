n, s, e, w = 0, 1, 2, 3
route = [e, n, e, n, w, n, e, n, w, n, e, n, w, n, e, w]

str = "0b110"
for i in route:
    add = bin(i).split("b")[1]
    str += add if len(add) > 1 else "0" + add
print(f"(BigInt({str}) << 35-{len(str)-2}).U(35.W)")
