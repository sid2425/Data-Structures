x=int(input("Enter the range value "))
r=range(x)
for i in r:
    if i%2==0:
        print(f'The given no is a prime number:{i}')