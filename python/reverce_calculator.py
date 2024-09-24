class calc:
    def __init__(self,n):
        for i in range(1,n):
            if(i*i==n):
                print(f"That values {n} squreroot is : {i}")
                break
        else:
            print("That value is not a squre")


n=int(input("Enter a number: "))
s=calc(n)
