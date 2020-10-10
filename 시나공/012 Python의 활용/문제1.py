class CharClass:
    a = ["Seoul","Incheon","Kyonggi","Daejun","Daegu","Pusan"]
myVar = CharClass()
str01 = ' '
for i in myVar.a:
    str01 = str01 + i[0]
print(str01)

# myVar.a = ["Seoul","Incheon","Kyonggi","Daejun","Daegu","Pusan"]
# str01=' ' : 공백
# i = myVar.a[0] = "Seoul", i[0] = S, str01 = " S"
# i = myVar.a[1] = "Incheon", i[0] = I, str01 = " SI"
# i = myVar.a[5] = "Pusan", i[0] = P, str01 = " SIKDDP"

# 결과
# _SIKDDP