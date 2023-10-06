a=float(input("A = "))
b=float(input("B = "))
c=float(input("C = "))

if (a%2==0 and b%2==0 and c%2==0) or (a%2==1 and b%2==1 and c%2==1):
    print("Cung tinh chan le")
else:
    print("Khac tinh chan le")