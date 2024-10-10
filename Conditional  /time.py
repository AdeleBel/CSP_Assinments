import datetime

currenttime = datetime.datetime.now()

print(currenttime.hour)

hour = 13

if hour < 12:
    print("Good Morning. ")
elif hour < 15:
    print("Good Afternoon!")
else:
    print("Good Evening, go to bed.")