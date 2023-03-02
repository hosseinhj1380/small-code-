def reverse (a):
    c=0
    i=3
    while i>=1:
        b=a%10
        c=b*(10**(i-1))+c 
        a=a//10
        i=i-1
    return c
a=int(input())
b=int(input())
a1=reverse(a)
b1=reverse(b)
if a1<b1 :
    print(f'{a} < {b}') 
elif b1<a1 :
    print(f'{b} < {a}')
else :
    print(f'{a} = {b}')
    
    
    