def check(alen, a, blen, b):
    c = {}
    l = len(a)
    for i in b:
        for j in range(l):
            if i in a[j]:
                a[j] = []
    for i in range(len(a)):
        if [] in a:
            a.remove([])
    for i in a:
        if i[0] not in c:
            c.update({i[0]: [i[1]]})
        else:
            z = c.get(i[0])
            z.append(i[1])
            c.update({i[0]: z})
    for i in c:
        z = c[i]
        zl = len(z)
        for j in range(zl):
            if z[j] in c:
                x = c.get(z[j])
                z.append(x)
                c.update({i: z})
                c.update({z[j]: []})
    fl = 0
    for i in c:
        f = c[i]
        ml = len(f)
        if ml > fl:
            fl = ml
    return fl

# Test Case 1
print("final output = ", check(5, [[1, 2], [1, 3], [3, 4], [3, 5]], 1, [3]))

# Test Case 2
print("final output = ",check(10, [[1, 2], [2, 3], [2, 4], [4, 5], [4, 6], [6, 7], [1, 8], [8, 9], [8, 10]],2,[1, 2],))
