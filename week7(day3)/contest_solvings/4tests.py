import random
n = random.randint(1, 50)
print(n)
print(*[random.randint(-100, 100) for i in range(n)])