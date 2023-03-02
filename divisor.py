

def divisor(number):
    number=int(number)
    div=[0]
    for i in range(1,number+1):
        for j in range(1,i+1):
            if i%j==0 :
                div.append(j)
    return div


                



num=int(input())
res=tuple(divisor(num))
print(len(res)-1,sum(res))



