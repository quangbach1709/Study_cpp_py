arr=[]

for i in range(3):
    x = int(input(f"Nhập số thứ {i+1}: "))
    arr.append(x)

maxarr=max(arr)

dem=arr.count(maxarr)
if dem==2:
    tmp=[num for num in arr if num!=maxarr]
    print('So con lai la:',*tmp)
else:
    print('max =',maxarr)

