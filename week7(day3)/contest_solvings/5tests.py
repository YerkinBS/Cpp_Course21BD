import random
v = [random.randint(1, 100) for i in range(random.randint(5, 35))]
v.insert(random.randint(0, len(v) - 1), 0)
print(*v)
open('input.txt', 'w').write(' '.join([str(i) for i in v]))
