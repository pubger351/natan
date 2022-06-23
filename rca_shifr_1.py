#!/usr/bin/env python
# coding: utf-8

# In[44]:


def f(a):
    w=0
    for i in range (2, a//2+1):
        if(a%i==0):
            w-w+1
    if (w<=0):
        return True 
    else:
        return False 
    n = int(input(" кодировать "))
    if(n==1):
        l=1
        p=int(input("p="))
        q=int(input("q="))
        message=int(input("введите сообение для кодировки  ="))
        if(f(q)==True and f(p)==True):
            print(f"{q}постое число")
            print(f"{p}постое число")
            o=p*q
            fg=(p-1)*(q-1) # эйлер
            g=0
            d=0
            print(f"функция эйлера :{fg}")
            print(f"модуль p и модуль q :{o}")
            for i in range (2,fg):
                if f(i)==True and fg%i!=0:
                    g=i
                    break
            print (f"открытая экспонета {g}")
            #g,n-public key
            print (f"открытый ключ ({g},{o})");
            if(message>=o):
                print("сбкщне>чем O знво ввдт")
            else:
                w = (pow(message,g))%n
                print(f"закодированное сообщение {w}")
                for i in range(o):
                    if((g*i) % fg==1)and i!=g:
                        d=i
                        break
                print(f"закрытый ключ ({d},{o}");
                
            if(f(q)==f(p)):
                 print("числа равны")
            else :
                 print("не простые числа ");


# In[ ]:





# In[ ]:




