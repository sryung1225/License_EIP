# 저장된 5개의 자료 중 최대값과 최소값을 찾아 출력

a = [50,30,70,10,90]
max = a[0]
min = a[0]
for i in range(1,5):
    if a[i] > max:
        max = a[i]
    if a[i] < min:
        min = a[i]
print(max, min, sep = '\n')

# max=a[0]=50, min=a[0]=30
# for문 1부터 4까지 반복 (i = 1, 2, 3, 4)
# a[1]=30 < min=50 => min=a[1]=30
# a[2]=70 > max=50 => max=a[2]=70
# a[3]=10 < min=30 => min=a[3]=10
# a[4]=90 > max=70 => max=a[4]=90

# 결과
""" 90
    10"""