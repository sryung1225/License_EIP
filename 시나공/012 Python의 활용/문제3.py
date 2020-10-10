def prnt():
    global a, b, c # 전역변수로 지정했기 때문에 어디에서나 사용
    while a < b:
        a += 1
        c += a
        prnt()
a, b, c = 0, 5, 0
prnt()
print('a =', a, end = ', ')
print('b =', b, end = ', ')
print('c =', c)

# a=0 b=5 c=0
# a<b : 0<5 => a=1 c=1
# a<b : 1<5 => a=2 c=3
# a<b : 2<5 => a=3 c=6
# a<b : 3<5 => a=4 c=10
# a<b : 4<5 => a=5 c=15

# 결과
# a = 5, b = 5, c = 15