""" 클래스 """

class Cls1:
    x, y = 10, 20 # 실행할 문장
    def chg(self): # self는 반드시 포함해야 하는 예약어
        temp = self.x
        self.x = self.y
        self.y = temp
a = Cls1()
print(a.x, a.y)
a.chg()
print(a.x, a.y)

# a = Cls() => a.x = 10, a.y = 20
# a.chg() => a.y=20, a.x=10

# 결과
""" 10 20
    20 10 """

# print(a.x a.y)는 오류
# 변수 2개 연달아 print하려면 ,로 구분할 것
#------------------------------------------------------------------------

class Cls2:
    def rep(self, r):
        hap = 0
        for i in range(r + 1):
            hap += i
        return hap
c = Cls2()
d = c.rep(10)
print(d)

# c = Cls2()
# d = c.rep(10) => r=10 hap=0
# for i in range(11) => i[11]=[0,1,2,3,4,5,6,7,8,9,10]
# hap = 0+1+2+3+...+10 = 55 = d

# 결과 55
#------------------------------------------------------------------------

def calc(x, y):
    x *= 3
    y /= 3
    print(x, y)
    return x
e, f = 3, 12
e = calc(e, f)
print(e, f)

# e=calc(3,12) => x=9 y=4.0 print(9,4.0) return x=9=e
# 파이썬에서는 나누기(/)를 진행할 때 자동으로 자료형이 float으로 변형 => y=4가 아니라 y=4.0
# print(9,12)

# 결과
""" 9 4.0
    9 12 """