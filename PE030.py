#!/usr/bin/env python
# coding=utf-8

import numpy as np
import matplotlib.pyplot as plt

plt.figure(1)
x = np.linspace(0, 7, 300)
y1 = [10**(z - 1) for z in x]
y2 = [(9**5)*z for z in x]

plt.figure(1)
plt.title('f(n) vs g(n)')
p1 = plt.plot(x, y1, label="$f(n)=10^{n-1}$");
p2 = plt.plot(x, y2, label="$g(n)=9^5 * n$");
plt.xlabel('n digits')
plt.ylabel('num value')

plt.legend()
plt.show()
