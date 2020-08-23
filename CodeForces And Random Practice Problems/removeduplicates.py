for T in range(1,int(input())+1):
	s=input()
	S=""
	for i in s:
		if i not in S:S+=i
	print("Case #%d:"%T)
	for i in S:print(i, s.count(i))
