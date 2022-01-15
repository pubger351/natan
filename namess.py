#!/usr/bin/env python
# coding: utf-8

# In[19]:


import matplotlib.pyplot as plt
import pandas as pd
cols = [ 'name' , 'gender', 'birth_count']

pieces = []
years = range(1880, 2010 + 1)
for i in years:
    df = pd.read_table('C:\Users\рязань\Desktop\names.'%i, sep = ',', engine = 'python' , names = cols)
    df['year'] = i
    pieces.append(df)
    data = pd.concat(pieces, ignore_index = True)
data


# In[20]:


babynumber = data['gender'].value_counts()
babynumber


# In[22]:


yearbirthcount = data.pivot_table('birth_count', 'year','gender', aggfunc = sum)
yearbirthcount


# ## yearbirthcount.plot(ylabel = 'birth_count * 10^7', title = '')

# In[11]:


prop = data.copy()
prop['proportion'] = prop['birth_count'] / prop['birth_count'].sum()
prop


# In[ ]:





# In[6]:


graph = pd.pivot_table(data, index = ['name','year'], values = ['birth_count'], aggfunc = 'sum')
print(graph['Johnny':'Johnny'].plot(y = 'birth_count', use_index = True))
print(graph['Natalie':'Natalie'].plot(y = 'birth_count', use_index = True))
print(graph['Bob':'Bob'].plot(y = 'birth_count', use_index = True))
print(graph['Vladislav':'Vladislav'].plot(y = 'birth_count', use_index = True))


# In[8]:


for i in years:
    df = pd.read_table('C:\\babynames\\yob%d.txt'%i, sep = ',', engine = 'python' , names = cols)
    df['year'] = i
    df = df.sort_values(by = 'birth_count', ascending = False)
    df = df.head(1)
    pieces.append(df)
    data = pd.concat(pieces, ignore_index = True)
df


# In[ ]:




