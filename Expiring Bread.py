# cook your dish here
t=int(input())
for x in range(t):
    a,b,c=map(int,input().split())
    d=b*c
    if d>=a:
        print("YES")
    else:
        print("NO")
