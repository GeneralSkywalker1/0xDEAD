n = int(input())
cnt = 0
alist = [1 for i in range(n)]
j = 0
while True:
   if alist[j]!=0:
       cnt+=1
   if cnt%3==0:
       alist[j] = 0
   j+=1
   if (alist.count(1)==1) and (j==n):
       print(alist.index(1)+1)
       break
   if j==n:
       j = 0
       
       
  
