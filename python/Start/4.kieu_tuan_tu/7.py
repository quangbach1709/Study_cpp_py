arr=int(input('Nhap day so: '))
n=int(input('Nhap so n: '))
arr=str(arr)
list=[]
for i in arr:
    list.append(i)

list.sort(reverse=True)

for _ in range(n):
    list.pop(0)

#chuyen list thanh chuoi
str=''
for i in list:
    str+=i

print(str)
