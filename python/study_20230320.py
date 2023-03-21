int(3.14)
print(1/3)
#형변환
print(int(1/3))
#정수나누기
print(1//3)

value = 3.140000000000000000
print(type(value))
print(type(int(value)))
#print(type(str(value)))
#print(str(value))

print("%d%%" %90)

strvalue = "%d%%" %90
print(strvalue)

strvalue2 = "%010d" % 10
print(strvalue2)

print("%.2f" % 3.14)
print("%.1f" % 3.14)


print("today is {0}, {1}, {2}" .format(19,'Jan', '2023'))
print("today is {0}, {0}, {0}" .format(19,'Jan', '2023'))
print("today is {day}, {month}, {year}".format(day=19, month='Jan', year='2023'))

print("----------")

year = 2023
month = "Jan"
day = 19
fstring = f"today is {day} {month} {year}"
print(fstring)

strTmp = "재미있는 파이썬"
print(strTmp[-0])
print(strTmp[-1])
print(strTmp[1])
print(strTmp[2])
print(strTmp[-2])
print(strTmp[0:3])

alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
print(alpha[:10])
print(alpha[10:])
print(alpha[10:20])
print(alpha[-5:])
print(alpha[:-5])
print(alpha[-10:-5])

for i in alpha:
    print(i)
