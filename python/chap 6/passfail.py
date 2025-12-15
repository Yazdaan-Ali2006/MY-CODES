physics=int(input("Enter your physics marks:"))
maths=int(input("Enter your maths marks:"))
chemistry=int(input("Enter your chemistry marks:"))
total_percentage=((physics+maths+chemistry)/300)*100
if(total_percentage>=40 and physics>=33 and maths>=33 and chemistry>=33):
    print("You are passed",total_percentage)
else:
    print("You are failed",total_percentage)    