import random
n = random.randint(1, 30)
m = random.randint(1, 30)
print(n)
print(*[random.randint(-100, 100) for i in range(n)])
print(m)
print(*[random.randint(-100, 100) for i in range(m)])