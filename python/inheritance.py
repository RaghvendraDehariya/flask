class company:
    CEO="Raghvendra Dehariya"
    cname="SiyaRam"
    def __init__(self):
        print("The company name is ",self.cname)

class employee(company):
    salary=120000;
    def __init__(self):
        print(f"You are employee of company {self.cname}\nYour first salary is {self.salary}")

class manager(employee):
    def __init__(self):
        print(f"You are promoted in company {self.cname} as manager and your salary is now : {self.salary*10}")
    


a=company()
print("Company's CEO is ",a.CEO)

b=employee()

c=manager();



