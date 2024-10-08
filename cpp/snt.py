a = int(input("enter a: "))
i = 2
while i < a:                # trong khi i < a thi lam 1 cai gi do 
    if(a%i == 0):           # neu a%i == 0 => i la uoc cua a => khong la so nguyen to 
        print(a, " khong la snt")
        break
    else: 
        i += 1    
print(a, " la snt") 
# roi do tu code di <3 
