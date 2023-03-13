num=int(input())
num1=tuple(input().split(' '))
num2=tuple(input().split(' '))

res=int(0)
for i in range(num):
    res+=int(num1[i])*int(num2[i])
    
print(res)