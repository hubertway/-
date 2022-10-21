n= int(input())
l = [list(map(int, input().split())) for i in range(n)]
'''
相当于
l = []
for i in range(n):
    a = list(map(int,input().split()))
    l.append(a)
'''
# 循环遍历计算到每一行的和的最大值
for i in range(1, n):
    for j in range(0, i + 1):
        if j == 0:  # 最左边元素只能由右上方得到
            l[i][j] += l[i - 1][j]
        elif j == i:  # 最右边元素只能由左上方得到
            l[i][j] += l[i - 1][j - 1]
        else:  # 其余元素由上方较大值得到
            l[i][j] += max(l[i - 1][j - 1: j + 1])
if n & 1:  # 如果是奇数行，则返回最中间值
    print(l[-1][n // 2])
else:  # 偶数行则返回中间较大值
    print(max(l[-1][n // 2 - 1], l[-1][n // 2]))
