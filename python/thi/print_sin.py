import math
#tinh va in ra gia tri cua ham sin(x) 0 do 10 do 20 do 30 do 40 do 50 do 60 do 70 do 80 do 90 do 100 do

for i in range(0,101,10):
    print('sin({}) = {}'.format(i,math.sin(math.radians(i))))
