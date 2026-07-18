import random
import time

env = {
    "A": random.randint(0, 1),
    "B": random.randint(0, 1),
    "C": random.randint(0, 1)
}

print("Name: Bidur Khanal")
print(env)

def status(a):
    if env[a] == 0:
        print("Room is dirty.")
    else:
        print("Room is clean.")

def cleanAgent(agent):

    if env[agent] == 1:
        agent = random.choice(['A', 'B', 'C'])
        print(f'\nAgent moved into room {agent}')
        status(agent)
        cleanAgent(agent)

    else:
        print("Cleaning....")
        time.sleep(3)

        env[agent] = 1

        print(f'Now Room {agent} is cleaned.')

        if env['A'] == 1 and env['B'] == 1 and env['C'] == 1:
            print('\nAll rooms are cleaned.')

all_clean = False

agent = random.choice(['A', 'B', 'C'])

print(f'\nAgent in room {agent}')
status(agent)

while all_clean == False:

    cleanAgent(agent)

    if env['A'] == 1 and env['B'] == 1 and env['C'] == 1:
        print('\nAll rooms are cleaned.')
        break