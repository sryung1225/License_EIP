""" for문 """

a = [ 35, 55, 65, 84, 45 ]
hap = 0
for i in a: # a의 크기만큼 a의 값을 i에 저장하면서 반복
    hap += i
avg = hap / len(a)
print(hap, avg)

# i=a[0]=35 hap=35
# i=a[1]=55 hap=35+55
# i=a[2]=65 hap=35+55+65
# i=a[3]=84 hap=35+55+65+84
# i=a[4]=45 hap=35+55+65+84+45=284
# avg = hap/len(a) = 284/5 = 56.8

# 결과 284, 56.8