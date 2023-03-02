c=tuple(input().split(' '))
a=int(c[0])
b=int(c[1])
l=int(c[2])
if l%2==0:
    l=l//2
    print(l*(a+b))
    
else :
    l=l//2
    print((l+1)*a +l*b )
    