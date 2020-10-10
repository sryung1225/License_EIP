""" 데이터 출력 """

print(12, 34, 56) # 12 34 56

print('gilbut', 'sinagong', sep='-') # gilbut-sinagong

print('help') # help
print('me') # me

print('help', end=' ') 
print('me') # help me

print('%3d' % 15) # _15
# %3d : 전체 3자리 확보 후 오른쪽에서부터(default) 출력

print('%.3s%8.2f' % ('help me', 245.2555)) # hel__245.26
# %.3s : 왼쪽에서부터 3자 출력 : hel
# %8.2f : 전체 8자리(. 포함) 확보 후 왼쪽에서부터 소수점 아래 2자리 까지 출력 : __245.26