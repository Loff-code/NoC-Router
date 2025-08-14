n, s, e, w = 0, 1, 2, 3
route = [n, e, s, w, n, s, n, s]
str = "0b110"
for i in route:
    str += bin(i).split("b")[1]
print(str)
