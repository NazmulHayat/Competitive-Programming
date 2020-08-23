
Save New Duplicate & Edit Just Text Twitter
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
#problem 14
import math
def factor(n):
    a = 0
    b = 0
    for i in range(2, n): #12
        if (n % i == 0):
            root = math.sqrt(i)
            root1 = i**(1/3)
            if int(root + 0.5) ** 2 == i:
                a = root  
                continue
            else: 
                a = 1
            if int(root1 + 0.5) ** 3 == i:
                b = root1
                break
            else: 
                b = 1
    return a, b

print(factor(64))
            

def is_powerful_number(n):
    #n = a**2 * b**3
    a = factor(n)
    if a is None:
        return False
    if (n % a == 0) and (n % a**2 == 0):
        return True
    else:
        return False

def test_is_powerful_number():
    assert(is_powerful_number(4) == True)
    assert(is_powerful_number(8) == True)
    assert(is_powerful_number(46) == False)
    assert(is_powerful_number(0) == False)
    assert(is_powerful_number(12) == False)
    assert(is_powerful_number(288) == True)
    print("is_powerful_number() passed!")


test_is_powerful_number()


def nthPowerfulNumber(n): #10 53
    found = 0
    guess = 0
    while (found <= n):
        guess += 1
        if (is_powerful_number(guess)):
            found += 1
    return guess

print(factor(23))

