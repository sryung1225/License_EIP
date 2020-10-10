""" 데이터 입력 """

a, b = input().split() # 12 34
print(a, b) # 12 34

c = int(input('입력하세요.')) # 123
print(c) # 123

d, e = input().split('34') # 123456
print(d, e) # 12 56

f , g, h = map(int, input('전화번호는?').split('-')) # 010-234-5678
print(f, g, h) # 10 234 5678
# 정수에서 맨 앞자리 0은 의미가 없기 때문에 010이 아닌 10

i, j = input().split('&') # Black&White
print(i, j) # Black White

k, l = map(float, input().split('*')) # 3.45*262E-6
print(k, l) # 3.45 0.000262