T = int(input())
for i in range(T):
    n = int(input())
    a = []
    for j in range(n):
        a.append(list(map(int,input().split())))
    flag = 0
    print(a)
    for k in range(n):
        for h in range(n):
            if (k>h) and (a[k][h]!=0):
                print("NO")
                flag = 1
                break
        if flag == 1:
            break
    else:
        print("YES")
        
