import random, string
alph = list(string.ascii_letters)
print(''.join([random.choice(alph) for i in range(random.randint(1, 50))]))