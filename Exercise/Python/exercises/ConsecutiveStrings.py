"""
You are given an array(list) strarr of strings and an integer k. 
Your task is to return the firstlongest string consisting of k 
consecutive strings taken in the array.
"""
def longest_consec(strarr, k):
    result = ""
    resultList = []
    if 0 > len(strarr)-k:
        return (result)
    else:
        for a in range(len(strarr)-k+1):
            for b in range(k):
                result += strarr[a+b]
            resultList.append(result)
            result = ""
    return max(resultList,key=len)