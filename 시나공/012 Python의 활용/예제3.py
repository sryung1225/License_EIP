""" while문 """

i, hap = 0, 0
while i < 5: # i<5일 동안 계속 반복
    i += 1 
    hap += i
print(hap)

# i=0 => i=1 hap=1
# i=1 => i=2 hap=1+2
# i=2 => i=3 hap=1+2+3
# i=3 => i=4 hap=1+2+3+4
# i=4 => i=5 hap=1+2+3+4+5=15

# 결과 15