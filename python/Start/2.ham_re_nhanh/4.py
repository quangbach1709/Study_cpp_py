def total(n):
    n=str(n)
    tong=0
    for i in n:
        tong+=int(i)

    return tong

n=int(input('n = '))

print('Tong cac chu so cua n la:',total(n))