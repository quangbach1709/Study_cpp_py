# name=input('Nhap ho ten: ')
# new= name.split(' ')
# print('Ho la:',new[0])
# last_name=""
# for i in range(1,len(new)):
#     last_name+=new[i]+' '

# print('Ten la:',last_name)

name=input('Nhap ten: ')
x=name.find(' ')
ho=""
for i in range(x):
    ho+=name[i]
ten=""
for i in range(x,len(name)):
    ten+=name[i]

print('Ho la:',ho)
print('Ten la:',ten)