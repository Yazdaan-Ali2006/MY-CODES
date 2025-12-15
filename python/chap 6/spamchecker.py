p1="buy now"
p2="join us to earn 100k+ per day"
p3="click on this"
p4="make a lot of money"
message=input("Enter your comment")
if((p1 in message) or (p2 in message) or (p3 in message) or (p4 in message)):
    print("spam")
else:
    print("it is not spam")    