#program to print the numbers from m to n (m<n) with an increment of p
m = int(input('Enter the M value (start value) : '))
n = int(input('Enter the N value (end value) : '))
p = int(input('Enter the P value (increment value) : '))

for i in range(m,n,p):#to include n also,give n+1
    print(i,end=' ')
    i+=2
    
