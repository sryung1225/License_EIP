""" if문 """

a = 15
if a > 10:
    a = a - 10
print(a)

# 결과 5
#-----------------------------------
b, c = 10, 20
if b > c:
    cha = b - c
    print(cha) 
else: 
    cha = c - b
    print(cha)

# 결과 10
#-----------------------------------
jum = 85
if jum >= 90: 
    print('학점은 A입니다.')
elif jum >= 80: 
    print('학점은 B입니다.')
elif jum >= 70:
    print('학점은 C입니다.') 
else: 
    print('학점은 F입니다.')

# 결과
# 학점은 B입니다.
#-----------------------------------
d, e = 21, 10
if d % 2 == 0: 
    if e % 2 == 0: 
        print('모두 짝수')
    else: 
        print('d : 짝수, e : 홀수') 
else: 
    if d % 2 == 0:
        print('d : 홀수, e : 짝수')
    else: 
        print('모두 홀수')

# 결과
# d : 홀수, e : 짝수