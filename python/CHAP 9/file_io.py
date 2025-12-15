f=open("file.txt")
data=f.read()
print(data)
f.close()

#You dont have to close the file
with open("file.txt") as f:
    print(f.read())

