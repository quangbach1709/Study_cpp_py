import math


tien=10000000
lai=5.1/100
#sau 10 nam co bao nhieu tien
print("So tien sau 10 nam la: ",int( tien*(1+lai)*10))

#sau bao nam thi dc 50tr
dich=50000000
nam=math.log(dich/tien,1+lai)
print("So nam de cos it nhat 50tr la: ",math.ceil(nam))