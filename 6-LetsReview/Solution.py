n = int(input())
for j in range(n):
    string_j = str(input())
    list_string_j = list(string_j)
    odd = []
    even = []
    for i in range(len(list_string_j)):
        if i % 2 == 0:
            even.append(list_string_j[i])
        else:
            odd.append(list_string_j[i])

    print(''.join(even) + ' ' + ''.join(odd))