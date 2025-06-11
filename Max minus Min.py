# cook your dish here
t=int(input())
for x in range(t):
    a,b,c=map(int,input().split())
    max_=max(a,b,c)
    min_=min(a,b,c)
    print(max_- min_)
