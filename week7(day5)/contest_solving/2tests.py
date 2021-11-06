import random
n = random.randint(3, 25)
print(str(n) + '\n' + ' '.join([str(random.randint(1, 100)) for i in range(n)]))