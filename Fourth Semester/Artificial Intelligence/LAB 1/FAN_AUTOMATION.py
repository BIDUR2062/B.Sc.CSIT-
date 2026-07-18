import random
temp=random.randint(0,50)
person=random.randint(0,1)

if (temp>30 and person==True):
    print(f'Temp: {temp} \nPerson: {bool(person)} \nFan on')
else:
    print(f'Temp:{temp} \nPerson:{bool(person)} \nFan off')

    