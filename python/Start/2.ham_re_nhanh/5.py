def isfibo (n):
    s1=0
    s2=1
    if(n==s1 or n==s2):
        return True
    else:
        while(s2<=n):
            s1,s2=s2,s1+s2
            if s2==n:
                return True
            
    return False

n=int(input('Nhap n = '))
print(isfibo(n))
