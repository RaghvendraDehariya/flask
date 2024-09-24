from random import randint
class company:
    CEO="Raghvendra Dehariya"
    cname="SiyaRam"
    ccode=randint(123456,369369)
    def __init__(cls):
        print("The company name is ",cls.cname)
    
    @classmethod
    def show(cls):
        print("The company code is ",cls.ccode)

class employee(company):
    salary=120000;
    def __init__(self,idno):
        print(f"You are employee of company {self.cname}\nYour first salary is {self.salary}")

    @property
    def name(self):
        return f"{self.fname} {self.lname}";

    @name.setter
    def name(self,value):
        self.fname=value.split(" ")[0]
        self.lname=value.split(" ")[1]


class manager(employee):
    def __init__(self):
        print(f"You are promoted in company {self.cname} as manager and your salary is now : {self.salary*10}")
    



a=company()
a.ccode=222222

a.show()

