
a=('copy of ')
b=tuple(input().split(' '))
c=int(b[0])
if c==0 :
    print(b[1])
else:
    i=0
    while i<c-1 :
        a=a+('copy of ')
        i=i+1
    a=a+b[1]
    print(a)
