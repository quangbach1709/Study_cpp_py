a=list()
b=list()
    #nhap A =, B = ,c =
a.append(int(input("A = ")))
a.append(int(input("B = ")))
a.append(int(input("C = ")))
    
#sap xep
b=set(a)
b=list(b)
b.sort()


print("Xep tang dan:",*b)









