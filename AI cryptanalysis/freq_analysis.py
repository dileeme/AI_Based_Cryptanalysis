from collections import Counter

english_freq="ETAOINSHRDLCUMWFGYPBVKJXQZ"

def freq_attack(cipher):
    c=Counter(cipher)
    order=[x[0] for x in c.most_common()]
    m={}
    for i in range(len(order)):
        m[order[i]]=english_freq[i]
    return "".join(m.get(ch,ch) for ch in cipher)

if __name__=="__main__":
    cipher="GSRHRZVWNVLMHGIZGRLM"
    print(freq_attack(cipher))

