#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import matplotlib.pyplot as plt
from random import randrange
n=int(input())
L=int(input())
T=0,8
E1=0
E2=0
E=0
Chislo=0
mas=[[0]*n for i in range(n)]
for k in range(-1,n):
    for j in range(-1,n):
        c=randrange(1,-2,-2)
        mas[j-1][k-1]=c
        j=j+1
    k=k+1
for k in range(0,n):
    for j in range(0,n):
        E1=E1+(mas[j-1][k]*mas[j-2][k])
for j in range(0,n):
    for k in range(0,n):
        E1=E1+(mas[j][k-1]*mas[j][k-2])
def Pamat():
    Chislo=mas[A][B]
    
def func():
    A=randrange(-1,n,1)
    B=randrange(-1,n,1)
    E2=0
    mas[A][B]=mas[A][B]*-1
    for A in range(0,n):
        for B in range(0,n):
            E2=E2+(mas[A-1][B]*mas[A-2][B])
    for j in range(0,n):
        for k in range(0,n):
            E2=E2+(mas[A][B-1]*mas[A][B-2])
    E=E1-E2
    
def func2():
    if (E<=0):
        func()
    if (E>0):
        P=randint(0,1)
        W=exp(-E/T)
        if (P<=W):
            mas[A][B]=Chislo
            Pamat()
            func()

for l in range(0,L+1):
    func()            
    func2()
plt.imshow(mas)


# In[ ]:




