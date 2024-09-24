class employee:
    company="Microsoft"
    
    '''def __init__(self,name,salary,pin): 
        print("Good morning! ",end="")
        self.name=name
        self.salary=salary
        self.pin=pin
'''
    @staticmethod
    def greet():
        print("good morning")

#r=employee("RAM",1200000000,480882)
#print(r.name,r.salary,r.pin,r.company)


#s=employee("SITA",250000000,480882)
#print(s.name,s.salary,s.pin,s.company)

emp = employee()

emp.greet()


