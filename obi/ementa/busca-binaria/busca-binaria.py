'''Algoritmo de Busca Binária'''
def bb(val):
    lo,hi=0,(n-1)
    while hi>=lo:
        mid=(hi+lo)//2
        if vetor[mid]==val:
            return mid
        if vetor[mid]<val:
            lo=mid+1
        else:
            hi=mid-1
    return -1
'''Inicialização'''
n=int(input())
vetor=[int(x) for x in input().split()]
x=int(input())
print(bb(x))