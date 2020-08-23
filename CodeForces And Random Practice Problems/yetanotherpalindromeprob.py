tc = int(input())
for i in range(tc):
    nums = int(input())
    vals = str(input())
    j = []
    j = vals.split()
    flag = 1
    for t in range(0, len(j)):
        for i in range(len(j)-1, t+1, -1):
            if(j[i] == j[t]):
                print("Yes")
                flag = 0
                break
        if(flag==0): 
            break

    if(flag==1):
        print("No")
