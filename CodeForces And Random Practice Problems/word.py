s = input()
up = 0
lo = 0
for i in s:
    if(i >= 'A' and i <= 'Z'):
        up += 1
    else:
        lo += 1
if(up == lo):
    print(s.lower())
if(up>lo):
    print(s.upper())
if(up<lo):
    print(s.lower())
