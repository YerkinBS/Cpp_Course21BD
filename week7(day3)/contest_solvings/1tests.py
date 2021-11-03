import random
n = random.randint(2, 25)
print(n)
print(*[random.randint(-1000, 1000) for i in range(n)])