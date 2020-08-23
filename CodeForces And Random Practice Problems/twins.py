n = int(input())
s = str(input())
test_list = s.split()
sum = 0

for i in range(0, len(test_list)): 
    test_list[i] = int(test_list[i]) 
    sum += test_list[i]

list.sort(test_list, reverse = True)

temp = test_list[0]
for i in range(1,n+1):
    if(temp > sum-temp):
        print(i)
        break
    temp += (test_list[i])


