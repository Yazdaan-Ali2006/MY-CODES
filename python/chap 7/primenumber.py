n=int(input("Enter any number",))

for i in range(2,n):
    if(n%i==0):
        print("Number is not prime")
else:
    print("Number is prime")        