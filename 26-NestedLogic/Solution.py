Da, Ma, Ya = [int(x) for x in input().split(' ')]
De, Me, Ye = [int(x) for x in input().split(' ')]

fine = 0 

if Ya > Ye:
    fine = 10000
elif Ya == Ye:
    if Ma > Me:
        fine = (Ma - Me) * 500
    elif Ma == Me:
        if Da > De:
            fine = (Da - De) * 15
print(fine)

