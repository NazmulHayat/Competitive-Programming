tc = int(input())
for i in range(0,tc):
    b = str(input())
    l = b.split()
    if(len(l[0]) == 1 and len(l[1]) == 1):
        print(int(l[0]) + int(l[1]))
    if(len(l[0]) == 1 and len(l[1]) == 2):
        f = l[0][0]
        s = l[1][0]
        z = l[1][1]
        sum1 = int(l[0]) + int(l[1])
        temp1 = f + z
        temp1 = int(temp1)
        sum2 = int(s) + temp1
        print(max(sum1,sum2))
    elif(len(l[0]) == 2 and len(l[1]) == 1):
        f = l[1][0]
        s = l[0][0]
        z = l[0][1]
        sum1 = int(l[0]) + int(l[1])
        temp1 = f + z
        temp1 = int(temp1)
        sum2 = int(s) + temp1
        print(max(sum1,sum2))
    else:
        f = l[0][0]
        s = l[0][1]
        t = l[1][0]
        z = l[1][1]
        temp1 = t+s
        temp1 = int(temp1)
        temp2 = f+z
        temp2 = int(temp2)
        temp3 = t+f
        temp3 = int(temp3)
        temp4 = z+s
        temp4 = int(temp4)
        sum1 = temp1+ temp2
        sum2 = (int(l[0]) + int(l[1]))
        sum3 = temp3+temp4
        print(max(max(sum1, sum2),sum3))

            