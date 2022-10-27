n = int(input())
n = n/1000 #将毫秒转换为秒
s = int(n%60)
m = int(n/60%60)
h = int(n/60/60%24)
print("{:0>2d}:{:0>2d}:{:0>2d}".format(h,m,s))
