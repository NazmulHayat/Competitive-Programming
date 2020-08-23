tc = int(input())
for i in range(tc):
    s = str(input())
    l = s.split()
    div = int(l[0])/int(l[1])
    if(div % 1 == 0):
        print(0)
    else:
        div = int(div) + 1
        print(div*int(l[1]) - int(l[0]))

