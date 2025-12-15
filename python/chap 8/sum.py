'''
sum(5)=1+2+3+4+5
sum(4)=1+2+3+4
sum(3)=1+2+3

'''
def sum(n):
    if(n==1):
        return 1
    return sum(n-1)+n
print("|:Findig the sum of natural numbers:|")
n=int(input("Enter Any Number"))
print("The sum is",sum(n)) 
