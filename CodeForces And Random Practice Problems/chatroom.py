s = input()
lst = ['h','e','l','l','o']
j = 0
flag = 0
counter = 0
for i in s:
    if(lst[j] == i):
        flag+=1
        j = j+1
    if(j == 5):
        break
        
if(flag == 5):
	print("YES")
else:
	print("NO")
