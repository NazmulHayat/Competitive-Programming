import math

def addition(full, pos):
    for j in range(pos):
        temp -= (temp % 10**power) * 10**power 

n = int(input())
length = len(str(abs(n)))

temp = 0
number = 0
total = 0
power = 1
flag = 1
startpos = 0
temp1 = 0
temp2 = 0
endpos = 0
sum = 0
for i in range(length, 1, -1):
    print("HI")
    print(i,'i')
    temp += n % (10**i)
    if(flag == 0):
        temp -= (temp % 10**power) * (10**power)
    print(temp, "Num")
    endpos =  i
    if(temp - (n % 10**(i-1) - temp*10) >= -1):
        print("U usuck", temp - (n % 10**(i-1) - temp*10))

        total += temp
    
    else:
        startpos = i 
        flag = 0
        power = 0
        if(sum > total):
            sum = total
            temp1 = startpos
            temp2 = endpos
            total = 0
            print(temp1, temp2, "Temps")

print(startpos, endpos)


