#D1: UO Off by One
s = input()
cs = dict()
for c in s:
    if cs.get(c, -1) == -1:
        cs[c] = 1
    else:
        cs[c] += 1
total = 1
for vals in cs.values():
    total = (total * (vals + 1)) % 11092019
print(total)
