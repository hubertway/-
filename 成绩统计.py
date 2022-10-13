n = int(input())
gc = 0 # 及格人数
ec = 0 # 优秀人数
for i in range(n):
    s = int(input())
    if s > 84: # 及格且优秀
        ec = ec+1
        gc = gc+1
    elif s > 59: gc = gc+1
# round() 方法返回浮点数x的四舍五入值。
print('{}%\n{}%'.format(round(100*gc/n),round(100*ec/n)))
