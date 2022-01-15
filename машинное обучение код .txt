from sklearn.datasets import load_iris
iris_data=load_iris()
print(iris_data.keys())
print(iris_data['DESCR'])
print( iris_data ['data'])
print(iris_data['target'])
print(iris_data['target_names'])
print(iris_data['feature_names'])


from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test=train_test_split(iris_data['data'],iris_data['target'],random_state=0)
print(x_train.shape)
print(y_train.shape)
print(x_test.shape)
print(y_test.shape)

print(x_train)
print(y_train)
print(x_test)
print(y_test)



from sklearn.neighbors import KNeighborsClassifier as KNN
knn=KNN(n_neighbors=1)
knn.fit(x_train,y_train)
prediction=knn.predict(x_test)
print(prediction)
print(y_test)