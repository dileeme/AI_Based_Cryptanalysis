import math

bigrams={"TH":2.71,"HE":2.33,"IN":2.03,"ER":1.78,"AN":1.61}

def score(text):
    s=0
    for i in range(len(text)-1):
        s+=math.log(bigrams.get(text[i:i+2],0.01))
    return s

if __name__=="__main__":
    print(score("THISISADEMONSTRATION"))
