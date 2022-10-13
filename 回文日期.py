import os
import sys
import datetime

date=input()
y=int(date[0:4]) # 将输入的日期转化为年月日的形式
m=int(date[4:6])
d=int(date[6:])

dd=datetime.date(y,m,d) # 将y,m，d转化为日期格式
flag=True # 输出一次回文日期

for i in range(9999999):
  dd=dd+datetime.timedelta(days=1)  # 日期增加1天
  strdd=str(dd).replace('-','') # 将日期转换为字符串的形式并将其中的-符号去掉
  if strdd==strdd[::-1]:
    if flag:
      print(strdd)
      flag=False
    if strdd[0]==strdd[2]==strdd[-1]==strdd[-3] and strdd[1]==strdd[3]==strdd[-2]==strdd[-4] :
      print(strdd)
      break
