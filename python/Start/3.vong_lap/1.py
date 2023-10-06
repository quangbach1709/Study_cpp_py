import math
def isprime(n):
    if math.sqrt(n)*math.sqrt(n)==n:
        return True
    return False

n=int(input('Nhap n = '))
print(isprime(n))