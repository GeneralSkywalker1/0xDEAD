n = int(input())
alist = []
for i in range(n):
    alist.append(list(map(int,input().split())))
Sum = 0
for i in range(n):
    for j in range(n):
        Sum+=alist[i][j]
        if (j==n-1) or (i==n-1) or (i+j==n-1):
            Sum-=alist[i][j]
print(Sum)
