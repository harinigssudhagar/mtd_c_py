#program to print the numbers from m to n (m<n) with an increment of p
m = int(input('Enter the M value (start value) : '))
n = int(input('Enter the N value (end value) : '))
p = int(input('Enter the P value (increment value) : '))

i = m
while(i<=n):
    print(i,end=' ')
    i=i+p

else:
    print('Mostly you gave value to M which is bigger than N')    

