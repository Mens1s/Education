# # # 1- Bir listeyi düzleştiren (flatten) fonksiyon yazın. Elemanları birden çok katmanlı listelerden ([[3],2] gibi) oluşabileceği gibi, 
# non-scalar verilerden de oluşabilir. Örnek olarak:

# # input: [[1,'a',['cat'],2],[[[3]],'dog'],4,5]

# # output: [1,'a','cat',2,3,'dog',4,5]

# # 2- Verilen listenin içindeki elemanları tersine döndüren bir fonksiyon yazın. Eğer listenin içindeki elemanlar da liste içeriyorsa onların elemanlarını da tersine döndürün. Örnek olarak:

# # input: [[1, 2], [3, 4], [5, 6, 7]]

# output: [[[7, 6, 5], [4, 3], [2, 1]]

# class homework():
#     def __init__(self,liste):
#         self.result = []
#         self.liste = liste

#     def flatten(self):
#         for a in self.liste:
#             if isinstance(a,list):
#                 homework.flatten(a)
#             else:
#                 self.result.append(a)
#         print(self.result)
# liste = [[1,'a',['cat'],2],[[[3]],'dog'],4,5]
# homework.flatten(liste)
result = []
def flatten(liste):
    for a in liste:
        if isinstance(a,list):
            flatten(a)
        else:
            result.append(a)
            
liste = [[1,'a',['cat'],2],[[[3]],'dog'],4,5]
flatten(liste)
print(result)