n =int(input())
max = -1
min = 101
sum = 0.
for i in range(n):
    s = int(input())
    sum = sum+s
    if max<s:max = s
    if min>s:min = s
print("{}\n{}\n{:.2f}".format(max,min,sum/n))
