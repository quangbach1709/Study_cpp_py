# n=int(input('N = '))
# a=int(input('A = '))
# b=int(input('B = '))

# tong=0
# for i in range(1,n+1):
#     if i%a==0 or i%b==0:
#         tong+=i

# print('Ket qua:',tong)

def sum_of_multiples(n, a, b):
    def sum_of_multiples_up_to(limit, multiple):
        count = (limit - 1) // multiple
        return multiple * count * (count + 1) // 2

    sum_a = sum_of_multiples_up_to(n, a)
    sum_b = sum_of_multiples_up_to(n, b)
    sum_common = sum_of_multiples_up_to(n, a * b // math.gcd(a, b))
    
    total_sum = sum_a + sum_b - sum_common
    return total_sum

import math

n = int(input('N = '))
a = int(input('A = '))
b = int(input('B = '))

result = sum_of_multiples(n, a, b)
print('Kết quả:', result)
