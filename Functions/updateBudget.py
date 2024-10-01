print("This is a finacial calculator")
income = input("how much do you make a month?: ")
rent = input("how much is your rent?: ")
utilitties=input("How much is your utilitties?: ")
groceries=input("How much do your goceries cost?: ")
transp=input("What does your transportation cost?: ")
print("You make", income)
savings = float(income)*float(0.2)
expenses = (float(rent) + float(utilitties) + float(groceries) + float(transp))
spending = float(income)-float(expenses)-float(savings)
print("your expenses are", expenses)
print("your savings is", savings)
print("your spending money is", spending)
prent=(float(rent)/float(income))*100
putilitties=(float(utilitties)/float(income))*100
pgroceries=(float(groceries)/float(income))*100
ptransp=(float(transp)/float(income))*100
print("your rent takes up this percent of your income;", prent)
print("your utilitties take up this percent of your income;", putilitties)
print("your groceries take up this percent of your income;", pgroceries)
print("you transportation takes up this percent of your income;", ptransp)