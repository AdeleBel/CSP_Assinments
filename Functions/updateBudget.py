print("This is a finacial calculator")

def cost(type):
    sent=float(input(f"How much is your {type}: \n"))
    return cost
income = cost
rent = cost
utilities = cost
groceries = cost
transportation = cost
    


savings = float(income) * float(0.2)
expenses = float(rent) + float(utilities) + float(groceries) + float(transportation)
spending = float(income)-float(expenses)-float(savings)

print("your expenses are", expenses)
print("your savings is", savings)
print("your spending money is", spending)

def percent(type, ammount):
    per = ammount/income *100
    
    print(f"your {type} is {per}% income")

percent("rent", rent)
percent("utilities", utilities)
percent("groceries", groceries)
percent("transportation", transportation)
percent("expenses", expenses)