n,m=map(int,input().split(' '))
my_list=[[]]
for i in range(n):
    my_list.append([])
    my_list[i][0:m-1]=map(int,input().split(' '))
my_list.remove([])
c=0
if n and m >=3 :
    for i in range(1,n-1):
        for j in range(1,m-1):
            if my_list[i][j]>my_list[i-1][j]  and  my_list[i][j]> my_list[i+1][j]:
                if my_list[i][j]<my_list[i][j-1] and my_list[i][j]< my_list[i][j+1]:
                    c=c+1   
            elif  my_list[i][j]>my_list[i][j-1] and my_list[i][j]>my_list[i][j+1]:
                if my_list[i][j]<my_list[i-1][j]  and  my_list[i][j]< my_list[i+1][j]:
                    c=c+1      
print(c)