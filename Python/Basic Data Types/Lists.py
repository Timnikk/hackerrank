v = []
lines = int(input())
for i in range(lines):
    user = input().split()
    command = user[0]
    if(command == "insert"):
        v.insert(int(user[1]), int(user[2]))
    elif(command == "print"):
        print(v)
    elif(command == "remove"):
        v.remove(int(user[1]))
    elif(command == "append"):
        v.append(int(user[1]))
    elif(command == "sort"):
        v.sort()
    elif(command == "pop"):
        v.pop()
    elif(command == "reverse"):
        v.reverse()
