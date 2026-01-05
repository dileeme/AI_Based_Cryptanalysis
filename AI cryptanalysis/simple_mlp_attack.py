from sklearn.neural_network import MLPClassifier
def vec(t):
    v=[0]*26
    for c in t:v[ord(c)-65]+=1
    return v
english=["THISISADEMONSTRATION","HELLOWORLD"]
randoms=["QZXMVPLKJHGF","ASDFGHJKL"]
X=[vec(t) for t in english+randoms]
y=[1]*len(english)+[0]*len(randoms)
clf=MLPClassifier(hidden_layer_sizes=(20,),max_iter=500)
clf.fit(X,y)
test="THISISADEMONSTRATION"
print(clf.predict_proba([vec(test)])[0][1])
