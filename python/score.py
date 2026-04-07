Score = float(input("Enter score: "))
if Score > 1.0 or Score < 0.0:
    print("Bad score")
elif Score >= 0.9:
    print("A")
elif Score >= 0.8:
    print("B")
elif Score >= 0.7:
    print("C")
elif Score >= 0.6:
    print("D")
else:
    print("F")