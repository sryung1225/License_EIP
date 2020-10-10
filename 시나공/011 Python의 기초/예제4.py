""" 문자열 출력 """
a = 'gilBUT sinaGONG'

print(a.upper()) # 대문자로 변경
# GILBUT SINAGONG

print(a.lower()) # 소문자로 변경
# gilbut sinagong

print(a.capitalize()) # 가장 맨 앞글자만 대문자, 뒤는 소문자로 변경
# Gilbut sinagong

print(a.title()) # 단어마다 앞글자만 대문자, 뒤는 소문자로 변경
# Gilbut Sinagong

print(a.replace('i','o')) # i를 o로 대체
# golBUT sonaGONG

print(a.split('i')) # i를 기준으로 나눠서 문자열에 넣기
# ['g', 'lBUT s', 'naGONG']

print(a.count('g')) # g의 개수세기(대소문자 구분. G는 세지 않음)
# 1

print(a.find('z')) # z가 처음 검색되는 위치(0부터) 출력. 없으면 -1
# -1

print(a.index('B')) # b가 처음 검색되는 위치(0부터) 출력
# 3