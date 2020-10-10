# <입력>
# Input String : information-technology
# Input Number : 12

arr_Str = input('Input String : ').split('-')
arr_Len = int(input('Input Number : '))
arr_Val = list(range(0, arr_Len, 2))
arr_Val.remove(4)
print(arr_Str[1].find('i') + arr_Val[2])

# arr_Str[][] = [information][technology]
# arr_Len = 12
# arr_Val[] = list(range(0, 12, 2)) : 0부터 11까지 2개마다 = [0, 2, 4, 6, 8]
# arr_Val[] = [0, 2, 6, 8]
# arr_Str[1].fint('i') : technology에서 i찾기 : 없음 = -1
# arr_Val[2] = 6

# 결과 5