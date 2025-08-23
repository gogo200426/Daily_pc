def find_common_start(words):
    if len(words)==0:
        return ""
    common=words[0]
    for word in words[1:]:
        while word.find(common)!=0:
            common=common[0:len(common)-1]
            if common=="":
                return ""
    return common

my_words=["flower","flow","flight"]
result=find_common_start(my_words)
print("Common prefix:",result)
