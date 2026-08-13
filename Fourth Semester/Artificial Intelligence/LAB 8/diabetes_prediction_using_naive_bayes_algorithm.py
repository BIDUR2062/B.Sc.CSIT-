import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.metrics import precision_score, recall_score, f1_score, accuracy_score
from sklearn.naive_bayes import GaussianNB

diabetes_dataset = pd.read_csv("diabetes.csv")
diabetes_dataset.head(5)
diabetes_dataset.shape
dataset = diabetes_dataset
features = dataset.columns
cols = (dataset[features] == 0).sum()

dataset["Outcome"].value_counts()

dataset.isnull().sum()

X = dataset.drop(columns="Outcome")
Y = dataset["Outcome"]

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2, shuffle=False)
print(X.shape, X_train.shape, X_test.shape)
print(f"\nTrain Data\n {Y_train.value_counts()}")
print(f"\nTest Data\n {Y_test.value_counts()}")

classifier = GaussianNB()

classifier.fit(X_train, Y_train)

X_train_prediction = classifier.predict(X_train)
training_data_accuracy = accuracy_score(X_train_prediction, Y_train)

X_test_prediction = classifier.predict(X_test)
test_data_accuracy = accuracy_score(X_test_prediction, Y_test)

accuracy_value = training_data_accuracy * 100
precision_value = precision_score(Y_train, X_train_prediction) * 100
recall_value = recall_score(Y_train, X_train_prediction) * 100
f1_score_value = f1_score(Y_train, X_train_prediction) * 100

accuracy_value1 = test_data_accuracy * 100
precision_value1 = precision_score(Y_test, X_test_prediction) * 100
recall_value1 = recall_score(Y_test, X_test_prediction) * 100
f1_score_value1 = f1_score(Y_test, X_test_prediction) * 100

print("Train Accuracy =", accuracy_value, "%")
print("Train Precision =", precision_value, "%")
print("Train Recall =", recall_value, "%")
print("Train F1 Score =", f1_score_value, "%")
print("-------------------------------------")
print("--------------------------------------")
print("Test Accuracy =", accuracy_value1, "%")
print("Test Precision =", precision_value1, "%")
print("Test Recall =", recall_value1, "%")
print("Test  F1 Score =", f1_score_value1, "%")

new_data=[9,135,89,30,178,4.5,89,40]
# new_data_df=pd.DataFrame(new_data,columns=X.columns)
result=classifier.predict([new_data])[0]
print("\nBIDUR KHANAL\n")
if(result==0):
    print("The Person have Diabetes")
else:
    print("The Person does not have Diabetes")
