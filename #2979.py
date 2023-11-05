import sys


input = sys.stdin.readline
a,b,c = map(int, input().split())
hap = 0
time = [0]*100
for _ in range(3):
    s,e = map(int, input().split())
    for i in range(s,e):
        time[i] += 1
    
print(time.count(1)*a+time.count(2)*2*b+time.count(3)*3*c)
