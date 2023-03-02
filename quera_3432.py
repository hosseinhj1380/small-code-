number =list(map(int,input().split(' ')))
javad=list(map(int,input().split(' ')))
mostafa=list(map(int,input().split(' ')))
if number[0]==number[1]:
    if javad==mostafa:
        print('Both')
elif number[0]>number[1]:
    for i in range(number[1]):
        if javad[i]==mostafa[i]:
            bl=True
        else:
            bl=False
            break
    if bl==True:
        print('Mohammad Javad')
    else:
        print('None')

elif number[1]>number[0]:
    for i in range(number[0]):
        if javad[i]==mostafa[i]:
            bl=True
        else:
            bl=False
            break
    if bl==True:
        print('Mostafa')
    else:
        print('None')


    
