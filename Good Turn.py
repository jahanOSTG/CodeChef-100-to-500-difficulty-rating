t = int(input())
for i in range(t):
    x,y = map(int,input().split())
    # write your code here
    c=x+y
    if c <= 6:
        print("NO")
    else:
        print("YES")
        
