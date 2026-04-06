Hours = float(input("Enter Hours: "))
Rate = float(input("Enter Rate: "))
if Hours > 40:
    pay = (Rate * 40.0) + (1.5 * Rate * (Hours -40.0))
else:
    pay = Hours * Rate
print("Pay: " +  str(pay))