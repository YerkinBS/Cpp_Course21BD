import random as rm
n = rm.randint(1, 50)
m = rm.randint(1, 50)
print(n, '\n', end='')
print(*[rm.randint(1, 1000) for i in range(n)])
print(m, '\n', end='')
print(*[rm.randint(1, 1000) for i in range(m)])