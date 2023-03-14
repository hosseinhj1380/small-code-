gender = input("Enter your gender (m/f): ")
age = int(input("Enter your age: "))
if (gender=='f' and age<23) or gender=='m' and age<25:
    amount=150000000
else:
    amount=120000000

M=1+(4/1200)
eq_left=amount*(M)**120
eq_right=((M**120)-1)/(M-1)
res=eq_left/eq_right
print (res)