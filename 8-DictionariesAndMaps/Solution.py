num = int(input())

phone_book = {}
for i in range(num):
    entry = str(input()).split(" ")

    name = entry[0]
    phone = int(entry[1])
    phone_book[name] = phone

while True:
    try:
        name = input()

        if name in phone_book:
            phone = phone_book[name]
            print(name + "=" + str(phone))
        else:
            print("Not found")
    except:
        break
        

