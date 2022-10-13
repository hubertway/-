w = input()
d={}
for c in w:
    d[c] = d.get(c,0) + 1

# 按字典的key排序（即字母序）
d1 = dict(sorted(d.items(), key=lambda x: x[0]))

i = ''
max = -1
for k,v in d1.items():
    if max < v:
        max  = v
        i = k

print("{}\n{}".format(i,max))  
